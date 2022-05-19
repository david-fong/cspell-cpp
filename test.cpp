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

# https://en.cppreference.com/w/cpp/header/cstddef
cstddef
offsetof
ptrdiff

# https://en.cppreference.com/w/cpp/header/cstring
cstring
strcpy
strncpy
strcat
strncat
strxfrm
strlen
strcmp
strncmp
strcoll
strchr
strrchr
strspn
strcspn
strpbrk
strstr
strtok
memchr
memcmp
memset
memcpy
memmove


WEOF
mbstate
wint
wcscpy
wcscat
wcsncat
wcsxfrm
wcslen
wcscmp
wcsncmp
wcscoll
wcschr
wcsrchr
wcsspn
wcspbrk
wcsstr
wcstok
wmemcpy
wmemmove
wmemcmp
wmemchr
wmemset
mbsinit
btowc
wctob
mbrlen
mbrtowc
wcrtomb
mbsrtowcs
wcsrtombs
fgetwc
getwc
fgetws
fputwc
putwc
fputws
getwchar
putwchar
ungetwc
fwide
wscanf
fwscanf
swscanf
vwscanf
vfwscanf
vswscanf
wprintf
fwprintf
swprintf
vwprintf
vfwprintf
vswprintf
wcsftime
wcstol
wcstoll
wcstoul
wcstoull
wcstof
wcstod
wcstold

getenv
malloc
calloc
realloc
atof
atoi
atol
atoll
strtol
strtoll
strtoul
strtoull
strtof
strtod
strtold
mblen
mbtowc
wctomb
mbstowcs
wcstombs
srand
qsort
bsearch
#labs
llabs
ldiv
lldiv

# https://en.cppreference.com/w/cpp/header/csignal
csignal
sigabrt
sigfpe
sigill
sigint
sigsegv
sigterm

# https://en.cppreference.com/w/cpp/header/csetjmp
csetjmp
setjmp
longjmp

# https://en.cppreference.com/w/cpp/header/cuchar
cuchar
mbrtoc
rtomb

sequenced
unsequenced

unsigned
overflow
signalling
denorm
modulo
tinyness
epsilon
enumerator

intmax
intptr
uint
uintmax
uintptr
ptrdiff
wint

scalar
compound
volatile
trivially
representations
polymorphic
aggregate
nothrow
invocable
interconvertible

monostate
npos

# https://en.cppreference.com/w/cpp/header/iostream
streambuf
istream
ostream
#cin
wcin
cout
wcout
cerr
wcerr
#clog
wclog

# https://en.cppreference.com/w/cpp/header/ios
fpos
streamoff
streamsize
boolalpha
noboolalpha
showbase
noshowbase
showpoint
noshowpoint
showpos
noshowpos
skipws
noskipws
nouppercase
unitbuf
nounitbuf
hexfloat
defaultfloat

schar
shrt
llong
uchar
ushrt
ulong
ullong

#flt
#dbl
ldbl
mant
subnorm
typeid

cerrno
eacces
eaddrinuse
eaddrnotavail
eafnosupport
eagain
ealready
ebadf
ebadmsg
ebusy
ecanceled
echild
econnaborted
econnrefused
econnreset
edeadlk
edestaddrreq
#edom
eexist
efault
efbig
ehostunreach
eidrm
eilseq
einprogress
eintr
einval
#eio
eisconn
eisdir
eloop
emfile
emlink
emsgsize
enametoolong
enetdown
enetreset
enetunreach
enfile
enobufs
enodata
enodev
enoent
enoexec
enolck
enolink
enomem
enomsg
enoprtoopt
enospc
enosr
enostr
enosys
enotconn
enotdir
enotempty
enotrecoverable
enotsock
enotsup
enotty
enxio
enxio
eopnotsupp
eoverflow
eownerdead
eperm
epipe
eproto
eprotonosupport
eprototype
erange
erofs
espipe
esrch
etime
etimedout
etxtbsy
ewouldblock
exdev

reinterpret
monotonic
bitset
vformat

chrono
nanoseconds
microseconds
milliseconds
weekday

unget
putback
getline
readsome
gcount
tellg
seekg
rdstate
setstate
copyfmt
rdbuf
setf
unsetf
getloc
xalloc
iword
pword
openmode
fmtflags
basefield
adjustfield
floatfield
#boolalpha
#showbase
#showpoint
#showpos
#skipws
#unitbuf
iostate
goodbit
badbit
failbit
eofbit
seekdir
trunc

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
