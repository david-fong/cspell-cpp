#include <iostream>
#include <cstdio>
// msvcMsvcMSVCMsvc_MSVC
// raii crtp sfinae ctad pimpl

#include <iostream>  // cout,
#include <iomanip>   // hex
#include <charconv>
#include <string_view>
#include <random>    // random_device,
// alignas alignof and and_eq asm noexcept auto bitor bool break case catch char char8_t char16_t char32_t class compl concept const consteval constexpr constinit continue co_await decltype default double dynamic enum explicit
// export extern false float friend goto inline namespace nullptr operator private protected public
// reflexpr register reinterpret requires return short signed sizeof static struct switch synchronized
// template thread throw typedef typeid typename union unsigned virtual void volatile wchar_t while xor
// #if
// #elif
// #endif
// #ifdef
// #ifndef
// #undef
// #pragma

/*
glvalue prvalue xvalue lvalue rvalue
string wstring u8string u16string c_str begin cbegin cend rbegin rend substr getline
stoi stol stoll stoul stoull stof stod stold

fpos stdin stdout stderr FOPEN BUFSIZE IOFBF IOLBF IONBF tmpnam
freopen fclose fflush setbuf setvbuf fread fwrite fgetc getc fgets fputc putc
fputs
getchar
gets
putchar
puts
ungetc
scanf
fscanf
sscanf
vscanf
vfscanf
vsscanf
printf
fprintf
sprintf
snprintf
vprintf
vfprintf
vsprintf
vsnprintf

ftell
fgetpos
fseek
fsetpos
rewind
clearerr
feof
ferror
perror
tmpfile
tmpnam



# https://en.cppreference.com/w/cpp/header/clocale
ctype
setlocale
localeconv

ctime
timespec
difftime
asctime
strftime
wcsftime
gmtime
localtime
mktime

cstddef

*/

/**
ARGUMENTS
1: grid order (default defined in compiled_orders).
2: scramble random key (default: device random number).
*/
int main(const int argc, char const *const argv[]) {
	okiidoku::util::setup_console();

	const unsigned user_order {(argc > 1)
		? static_cast<unsigned>(std::stoi(argv[1]))
		: okiidoku::compiled_orders[0]
	};
	const auto srand_key {[&]() -> std::uint_fast64_t {
		if (argc > 2) {
			const std::string_view arg {argv[2]};
			std::uint_fast64_t parsed {};
			if (std::from_chars(arg.data(), arg.data()+arg.size(), parsed, 16).ec == std::errc{}) {
				return parsed;
			}
			std::cerr << "\nfailed to parse rng seed argument (hex u64). using random_device instead.";
		}
		return std::random_device()();
	}()};

	std::cout << "\nparsed arguments:"
	<< "\n- arg 1 (grid order) : " << user_order
	<< "\n- arg 2 (srand key)  : " << std::hex << srand_key << std::dec // TODO.mid ugh. it's using my numpunct grouping.
	<< std::endl;

	okiidoku::SharedRng shared_rng;
	shared_rng.rng.seed(srand_key);

	okiidoku::cli::Repl repl {user_order, shared_rng};
	repl.start();

	std::cout << "\nbye bye!\n" << std::endl;
	return 0;
}
