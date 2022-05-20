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

eq
neq
lt
lteq
gt
gteq
coroutine
noop

udls
iota

inout
addressof
undeclare
rebind

boyer
moore
horspool

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

rfind
ssize
typeinfo
semiregular
typeindex
wformat

isalnum
isalpha
islower
isupper
isdigit
isxdigit
iscntrl
isgraph
isspace
isblank
isprint
ispunct
tolower
toupper

wctrans_t
wctype_t
wint

wstring
wbuffer
codecvt
numpunct
moneypunct
subspan

emplace
comp
iter
prev

istreambuf
ostreambuf
subrange

inplace_merge
minmax
imag
conj
proj
asin
acos
atan
sinh
cosh
tanh
asinh
acosh
atanh

mersenne
minstd
ranlux
knuth
bernoulli
poisson
gamma
weibull
cauchy

valarray
gslice
cshift

iota

byteswap
rotl
rotr
countl
countr
popcount

sqrtpi
egamma
#phi

fenv_t
fexcept_t
feclearexcept
fetestexcept
feraiseexcept
fegetexceptflag
fesetexceptflag
fegetround
fesetround
fegetenv
fesetenv
feholdexcept
feupdateenv
FE_ALL_EXCEPT
FE_DIVBYZERO
FE_INEXACT
FE_INVALID
FE_OVERFLOW
FE_UNDERFLOW
FE_DOWNWARD
FE_TONEAREST
FE_TOWARDZERO
FE_UPWARD
FE_DFL_ENV

HUGE_VALF
HUGE_VAL
HUGE_VALL
math_errhandling
MATH_ERRNO
MATH_ERREXCEPT
abs
fabs
fabsf
fabsl
fmod
fmodf
fmodl
remainderf
remainderl
remquo
remquof
remquol
fma
fmaf
fmal
fmax
fmaxf
fmaxl
fmin
fminf
fminl
fdim
fdimf
fdiml
nan
nanf
nanl
lerp
exp
expf
expl
expm1
expm1f
expm1l
logf
logl
powf
powl
sqrt
sqrtf
sqrtl
cbrt
cbrtf
cbrtl
hypot
hypotf
hypotl
sinf
sinl
cosf
cosl
tanf
tanl
asin
asinf
asinl
acos
acosf
acosl
atan
atanf
atanl
sinh
sinhf
sinhl
cosh
coshf
coshl
tanh
tanhf
tanhl
asinh
asinhf
asinhl
atanh
atanhf
atanhl
erf
erff
erfl
erfc
erfcf
erfcl
tgamma
tgammaf
tgammal
lgamma
lgammaf
lgammal
ceil
ceilf
ceill
floor
floorf
floorl
trunc
truncf
truncl
round
roundf
roundl
lround
lroundf
lroundl
llround
llroundf
llroundl
nearbyint
nearbyintf
nearbyintl
rint
rintf
rintl
lrint
lrintf
lrintl
llrint
llrintf
llrintl
frexp
frexpf
frexpl
ldexp
ldexpf
ldexpl
modf
modff
modfl
scalbn
scalbnf
scalbnl
scalbln
scalblnf
scalblnl
ilogb
ilogbf
ilogbl
logb
logbf
logbl
nextafter
nextafterf
nextafterl
nexttoward
nexttowardf
nexttowardl
copysign
copysignf
copysignl
fpclassify
isfinite
isinf
isnan
isnormal
signbit
isgreater
isgreaterequal
isless
islessequal
islessgreater
isunordered
assoc
laguerre
laguerref
laguerrel
legendre
legendref
legendrel
betaf
betal
ellint
#neumann
neumannf
neumannl
expint
expintf
expintl
hermite
hermitef
hermitel
legendre
legendref
legendrel
laguerre
laguerref
laguerrel
riemann_zeta
riemann_zetaf
riemann_zetal
bessel
besself
bessell


resetiosflags
setiosflags
setbase
setfill
setprecision
setw

streambuf
wstreambuf
pubimbue
getloc
pubsetbuf
pubseekoff
pubsync
snextc
sbumpc
stossc # removed in c++17
sgetc
sgetn
sputc
sputn
sputbackc
sungetc
setbuf
seekoff
seekpos
showmanyc
underflow
uflow
xsgetn
eback
gptr
egptr
gbump
setg
pbackfail

stringbuf
wstringbuf
istringstream
wistringstream
ostringstream
wostringstream
stringstream
wstringstream
xsputn
rdstate

spanbuf
wspanbuf
ispanstream
wispanstream
ospanstream
wospanstream
spanstream
wspanstream

imaxabs
imaxdiv
strtoimax
strtoumax
wcstoimax
wcstoumax
PRId # PRId8, etc...
PRIi # PRIi8, etc...
PRIu # PRIu8, etc...
PRIo # PRIo8, etc...
PRIx # PRIx8, etc...
PRIX # PRIX8, etc...
SCNd # SCNd8, etc...
SCNi # SCNi8, etc...
SCNu # SCNu8, etc...
SCNo # SCNo8, etc...
SCNx # SCNx8, etc...

icase
nosubs
multiline
ECMAScript
grep
egrep
csub_match
wcsub_match
ssub_match
wssub_match

cmatch
wcmatch
smatch
wsmatch

backref
brack
paren
brace
badbrace
badrepeat

translate_notrace
lookup_collatename
lookup_classname
isctype

atomic_ushort

nostopstate


msys


# algorithms
cumul

asio
coro
netdb
addrinfo

spinlock
cmpxchg
posix

teardown
permessage_deflate
serializer

bimap
fmtlib
fixedsize
rethrow
errorcode
fcontext
ucontext
nonmember
frechet
hausdorff
linestring
douglas_peucker
deciven
memunit
deref


bjarne
stroustrup
alexandrescu
stepanov
carruth
dusikova
lefticus
godbolt
lavavej
eerd
niebler
isocpp

noreturn
fallthrough
nodiscard

pipable
bufferbuf
vectorbuf
bufferstream
ibufferstream
obufferstream
ivectorstream
ovectorstream
iset
iunordered
rbtree
wmanaged
slist
nullstream
peekable
seekable
pipable
multichar
wfilter
warray
wchain
wcounter
wdevice
wfile
wfilter
wline_filter
wnull_source
wregex_filter
wsink
swource
wstdio_filter
pubseekpos
lockfree

feigenbaum
dottie
hyperexponential
hypergeometric
smirnov
noncentral
ljung
digamma
trigamma
polygamma
erfc
chebyshev
gegenbaur
hankel
heuman
powm1
daubechies
catmull_rom
catmull-rom
akima
pchip
lanczos

luroth

metaparse
foldl
foldr
datatype
inplace
iarchive
oarchive

multiprecision
mpfr

bashforth
bulirsch_stoer
rosenbrock
runge_kutta
dopri
fehlberg
sympletic
verlet

# AMD GPU
amdgpu

# calling conventions
aarch64_sve_pcs
aarch64_vector_pcs
fastcall
regcall
regparm
stdcall
thiscall
vectorcall

# consumed annotation checking
typestate

# customizing swift import
swift_newtype

# declaration attributes
novtable
boxable
objc_nonlazy_class
objc_subclassing_restricted
selectany

# function attributes
cmse_nonsecure_entry
ifunc
lifetimebound
micromips
nocf_check
noduplicate
nomicromips
numthreads
optnone
overloadable
sycl_kernel
xray_always_instrument
xray_never_instrument
xray_log_args

# nullability attributes
nonnull

# OpenCL address spaces
opencl

# statement attributes
intel_reqd_sub_group_size
musttail
nomerge
sycl_special_class

# type attributes
__sptr
__uptr
nodebug
noescape
nosvm
swiftasynccall
swiftcall

appdomain
dllimport
dllexport
jitintrinsic
noalias
noinline
noreturn
nothrow
novtable
safebuffers
selectany

# https://docs.microsoft.com/en-us/cpp/cpp/keywords-cpp#microsoft-specific-c-keywords
__cdecl
__fastcall
__forceinline
__sptr
__stdcall
__thiscall
__uptr
__uuidof
__vectorcall

__nogc
__noop
gcnew
initonly
safecast

ifunc
noclone
noinline
noipa
nonnull
noplt
noreturn
nothrow
patchable
symver
weakref
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
