/*
 * This file produced from ./encodings.pl on Fri Sep 19 08:08:08 2003
 * $Id: encodings.h,v 1.6 2003-09-19 06:10:15 freddy77 Exp $
 */
static const TDS_ENCODING canonic_charsets[] = {
	{        "ISO-8859-1",	1, 1},	/*   0 */
	{             "UTF-8",	1, 4},	/*   1 */
	{           "UCS-2LE",	2, 2},	/*   2 */
	{           "UCS-2BE",	2, 2},	/*   3 */
	{         "ARMSCII-8",	1, 1},	/*   4 */
	{             "BIG-5",	1, 1},	/*   5 */
	{        "BIG5-HKSCS",	1, 1},	/*   6 */
	{               "C99",	1, 1},	/*   7 */
	{           "CHINESE",	1, 1},	/*   8 */
	{                "CN",	1, 1},	/*   9 */
	{             "CN-GB",	1, 1},	/*  10 */
	{    "CN-GB-ISOIR165",	1, 1},	/*  11 */
	{            "CP1133",	1, 1},	/*  12 */
	{            "CP1250",	1, 1},	/*  13 */
	{            "CP1251",	1, 1},	/*  14 */
	{            "CP1252",	1, 1},	/*  15 */
	{            "CP1253",	1, 1},	/*  16 */
	{            "CP1254",	1, 1},	/*  17 */
	{            "CP1255",	1, 1},	/*  18 */
	{            "CP1256",	1, 1},	/*  19 */
	{            "CP1257",	1, 1},	/*  20 */
	{            "CP1258",	1, 1},	/*  21 */
	{            "CP1361",	1, 1},	/*  22 */
	{             "CP850",	1, 1},	/*  23 */
	{             "CP862",	1, 1},	/*  24 */
	{             "CP866",	1, 1},	/*  25 */
	{             "CP874",	1, 1},	/*  26 */
	{             "CP932",	1, 1},	/*  27 */
	{             "CP936",	1, 1},	/*  28 */
	{             "CP949",	1, 1},	/*  29 */
	{             "CP950",	1, 1},	/*  30 */
	{            "EUC-JP",	1, 1},	/*  31 */
	{            "EUC-KR",	1, 1},	/*  32 */
	{            "EUC-TW",	1, 1},	/*  33 */
	{           "GB18030",	1, 1},	/*  34 */
	{  "GEORGIAN-ACADEMY",	1, 1},	/*  35 */
	{       "GEORGIAN-PS",	1, 1},	/*  36 */
	{                "HZ",	1, 1},	/*  37 */
	{       "ISO-2022-CN",	1, 1},	/*  38 */
	{   "ISO-2022-CN-EXT",	1, 1},	/*  39 */
	{       "ISO-2022-JP",	1, 1},	/*  40 */
	{     "ISO-2022-JP-1",	1, 1},	/*  41 */
	{     "ISO-2022-JP-2",	1, 1},	/*  42 */
	{       "ISO-2022-KR",	1, 1},	/*  43 */
	{       "ISO-8859-10",	1, 1},	/*  44 */
	{       "ISO-8859-13",	1, 1},	/*  45 */
	{       "ISO-8859-14",	1, 1},	/*  46 */
	{       "ISO-8859-15",	1, 1},	/*  47 */
	{       "ISO-8859-16",	1, 1},	/*  48 */
	{        "ISO-8859-2",	1, 1},	/*  49 */
	{        "ISO-8859-3",	1, 1},	/*  50 */
	{        "ISO-8859-4",	1, 1},	/*  51 */
	{        "ISO-8859-5",	1, 1},	/*  52 */
	{        "ISO-8859-6",	1, 1},	/*  53 */
	{        "ISO-8859-7",	1, 1},	/*  54 */
	{        "ISO-8859-8",	1, 1},	/*  55 */
	{        "ISO-8859-9",	1, 1},	/*  56 */
	{         "ISO-IR-14",	1, 1},	/*  57 */
	{        "ISO-IR-149",	1, 1},	/*  58 */
	{        "ISO-IR-159",	1, 1},	/*  59 */
	{        "ISO-IR-166",	1, 1},	/*  60 */
	{         "ISO-IR-87",	1, 1},	/*  61 */
	{              "JAVA",	1, 1},	/*  62 */
	{     "JISX0201-1976",	1, 1},	/*  63 */
	{            "KOI8-R",	1, 1},	/*  64 */
	{           "KOI8-RU",	1, 1},	/*  65 */
	{            "KOI8-T",	1, 1},	/*  66 */
	{            "KOI8-U",	1, 1},	/*  67 */
	{               "MAC",	1, 1},	/*  68 */
	{         "MACARABIC",	1, 1},	/*  69 */
	{  "MACCENTRALEUROPE",	1, 1},	/*  70 */
	{       "MACCROATIAN",	1, 1},	/*  71 */
	{       "MACCYRILLIC",	1, 1},	/*  72 */
	{          "MACGREEK",	1, 1},	/*  73 */
	{         "MACHEBREW",	1, 1},	/*  74 */
	{        "MACICELAND",	1, 1},	/*  75 */
	{        "MACROMANIA",	1, 1},	/*  76 */
	{           "MACTHAI",	1, 1},	/*  77 */
	{        "MACTURKISH",	1, 1},	/*  78 */
	{        "MACUKRAINE",	1, 1},	/*  79 */
	{         "MULELAO-1",	1, 1},	/*  80 */
	{          "NEXTSTEP",	1, 1},	/*  81 */
	{            "ROMAN8",	1, 1},	/*  82 */
	{              "SJIS",	1, 1},	/*  83 */
	{              "TCVN",	1, 1},	/*  84 */
	{             "UCS-2",	2, 2},	/*  85 */
	{    "UCS-2-INTERNAL",	2, 2},	/*  86 */
	{     "UCS-2-SWAPPED",	2, 2},	/*  87 */
	{             "UCS-4",	4, 4},	/*  88 */
	{    "UCS-4-INTERNAL",	4, 4},	/*  89 */
	{     "UCS-4-SWAPPED",	4, 4},	/*  90 */
	{           "UCS-4BE",	4, 4},	/*  91 */
	{           "UCS-4LE",	4, 4},	/*  92 */
	{          "US-ASCII",	1, 1},	/*  93 */
	{            "UTF-16",	2, 4},	/*  94 */
	{          "UTF-16BE",	2, 4},	/*  95 */
	{          "UTF-16LE",	2, 4},	/*  96 */
	{            "UTF-32",	4, 4},	/*  97 */
	{          "UTF-32BE",	4, 4},	/*  98 */
	{          "UTF-32LE",	4, 4},	/*  99 */
	{             "UTF-7",	1, 4},	/* 100 */
	{            "VISCII",	1, 1},	/* 101 */
	{"",	0, 0}
};

static const CHARACTER_SET_ALIAS iconv_aliases[] = {
	{                    "646",   93 },
	{                    "850",   23 },
	{                    "862",   24 },
	{                    "866",   25 },
	{         "ANSI_X3.4-1968",   93 },
	{         "ANSI_X3.4-1986",   93 },
	{                 "ARABIC",   53 },
	{              "ARMSCII-8",    4 },
	{                  "ASCII",   93 },
	{               "ASMO-708",   53 },
	{                  "BIG-5",    5 },
	{               "BIG-FIVE",    5 },
	{                   "BIG5",    5 },
	{             "BIG5-HKSCS",    6 },
	{              "BIG5HKSCS",    6 },
	{                "BIGFIVE",    5 },
	{                    "C99",    7 },
	{                "CHINESE",    8 },
	{                     "CN",    9 },
	{                "CN-BIG5",    5 },
	{                  "CN-GB",   10 },
	{         "CN-GB-ISOIR165",   11 },
	{                 "CP1133",   12 },
	{                 "CP1250",   13 },
	{                 "CP1251",   14 },
	{                 "CP1252",   15 },
	{                 "CP1253",   16 },
	{                 "CP1254",   17 },
	{                 "CP1255",   18 },
	{                 "CP1256",   19 },
	{                 "CP1257",   20 },
	{                 "CP1258",   21 },
	{                 "CP1361",   22 },
	{                  "CP367",   93 },
	{                  "CP819",    0 },
	{                  "CP850",   23 },
	{                  "CP862",   24 },
	{                  "CP866",   25 },
	{                  "CP874",   26 },
	{                  "CP932",   27 },
	{                  "CP936",   28 },
	{                  "CP949",   29 },
	{                  "CP950",   30 },
	{                "CSASCII",   93 },
	{                 "CSBIG5",    5 },
	{                "CSEUCKR",   32 },
	{    "CSEUCPKDFMTJAPANESE",   31 },
	{                "CSEUCTW",   33 },
	{               "CSGB2312",   10 },
	{    "CSHALFWIDTHKATAKANA",   63 },
	{             "CSHPROMAN8",   82 },
	{               "CSIBM866",   25 },
	{      "CSISO14JISC6220RO",   57 },
	{   "CSISO159JISX02121990",   59 },
	{            "CSISO2022CN",   38 },
	{            "CSISO2022JP",   40 },
	{           "CSISO2022JP2",   42 },
	{            "CSISO2022KR",   43 },
	{          "CSISO57GB1988",    9 },
	{        "CSISO58GB231280",    8 },
	{        "CSISO87JISX0208",   61 },
	{            "CSISOLATIN1",    0 },
	{            "CSISOLATIN2",   49 },
	{            "CSISOLATIN3",   50 },
	{            "CSISOLATIN4",   51 },
	{            "CSISOLATIN5",   56 },
	{            "CSISOLATIN6",   44 },
	{       "CSISOLATINARABIC",   53 },
	{     "CSISOLATINCYRILLIC",   52 },
	{        "CSISOLATINGREEK",   54 },
	{       "CSISOLATINHEBREW",   55 },
	{                "CSKOI8R",   64 },
	{          "CSKSC56011987",   58 },
	{            "CSMACINTOSH",   68 },
	{    "CSPC850MULTILINGUAL",   23 },
	{     "CSPC862LATINHEBREW",   24 },
	{             "CSSHIFTJIS",   83 },
	{                 "CSUCS4",   88 },
	{              "CSUNICODE",   85 },
	{            "CSUNICODE11",    3 },
	{        "CSUNICODE11UTF7",  100 },
	{               "CSVISCII",  101 },
	{               "CYRILLIC",   52 },
	{               "ECMA-114",   53 },
	{               "ECMA-118",   54 },
	{               "ELOT_928",   54 },
	{                 "EUC-CN",   10 },
	{                 "EUC-JP",   31 },
	{                 "EUC-KR",   32 },
	{                 "EUC-TW",   33 },
	{                  "EUCCN",   10 },
	{                  "EUCJP",   31 },
	{                  "EUCKR",   32 },
	{                  "EUCTW",   33 },
	{"EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE",   31 },
	{                "GB18030",   34 },
	{                 "GB2312",   10 },
	{                    "GBK",   28 },
	{             "GB_1988-80",    9 },
	{             "GB_2312-80",    8 },
	{       "GEORGIAN-ACADEMY",   35 },
	{            "GEORGIAN-PS",   36 },
	{                  "GREEK",   54 },
	{                 "GREEK8",   54 },
	{                 "HEBREW",   55 },
	{              "HP-ROMAN8",   82 },
	{                     "HZ",   37 },
	{             "HZ-GB-2312",   37 },
	{             "IBM-CP1133",   12 },
	{                 "IBM367",   93 },
	{                 "IBM819",    0 },
	{                 "IBM850",   23 },
	{                 "IBM862",   24 },
	{                 "IBM866",   25 },
	{        "ISO-10646-UCS-2",   85 },
	{        "ISO-10646-UCS-4",   88 },
	{            "ISO-2022-CN",   38 },
	{        "ISO-2022-CN-EXT",   39 },
	{            "ISO-2022-JP",   40 },
	{          "ISO-2022-JP-1",   41 },
	{          "ISO-2022-JP-2",   42 },
	{            "ISO-2022-KR",   43 },
	{             "ISO-8859-1",    0 },
	{            "ISO-8859-10",   44 },
	{            "ISO-8859-13",   45 },
	{            "ISO-8859-14",   46 },
	{            "ISO-8859-15",   47 },
	{            "ISO-8859-16",   48 },
	{             "ISO-8859-2",   49 },
	{             "ISO-8859-3",   50 },
	{             "ISO-8859-4",   51 },
	{             "ISO-8859-5",   52 },
	{             "ISO-8859-6",   53 },
	{             "ISO-8859-7",   54 },
	{             "ISO-8859-8",   55 },
	{             "ISO-8859-9",   56 },
	{             "ISO-CELTIC",   46 },
	{             "ISO-IR-100",    0 },
	{             "ISO-IR-101",   49 },
	{             "ISO-IR-109",   50 },
	{             "ISO-IR-110",   51 },
	{             "ISO-IR-126",   54 },
	{             "ISO-IR-127",   53 },
	{             "ISO-IR-138",   55 },
	{              "ISO-IR-14",   57 },
	{             "ISO-IR-144",   52 },
	{             "ISO-IR-148",   56 },
	{             "ISO-IR-149",   58 },
	{             "ISO-IR-157",   44 },
	{             "ISO-IR-159",   59 },
	{             "ISO-IR-165",   11 },
	{             "ISO-IR-166",   60 },
	{             "ISO-IR-179",   45 },
	{             "ISO-IR-199",   46 },
	{             "ISO-IR-203",   47 },
	{             "ISO-IR-226",   48 },
	{              "ISO-IR-57",    9 },
	{              "ISO-IR-58",    8 },
	{               "ISO-IR-6",   93 },
	{              "ISO-IR-87",   61 },
	{              "ISO646-CN",    9 },
	{              "ISO646-JP",   57 },
	{              "ISO646-US",   93 },
	{              "ISO8859-1",    0 },
	{             "ISO8859-10",   44 },
	{             "ISO8859-15",   47 },
	{              "ISO8859-2",   49 },
	{              "ISO8859-4",   51 },
	{              "ISO8859-5",   52 },
	{              "ISO8859-6",   53 },
	{              "ISO8859-7",   54 },
	{              "ISO8859-8",   55 },
	{              "ISO8859-9",   56 },
	{       "ISO_646.IRV:1991",   93 },
	{             "ISO_8859-1",    0 },
	{            "ISO_8859-10",   44 },
	{       "ISO_8859-10:1992",   44 },
	{            "ISO_8859-13",   45 },
	{            "ISO_8859-14",   46 },
	{       "ISO_8859-14:1998",   46 },
	{            "ISO_8859-15",   47 },
	{       "ISO_8859-15:1998",   47 },
	{            "ISO_8859-16",   48 },
	{       "ISO_8859-16:2000",   48 },
	{        "ISO_8859-1:1987",    0 },
	{             "ISO_8859-2",   49 },
	{        "ISO_8859-2:1987",   49 },
	{             "ISO_8859-3",   50 },
	{        "ISO_8859-3:1988",   50 },
	{             "ISO_8859-4",   51 },
	{        "ISO_8859-4:1988",   51 },
	{             "ISO_8859-5",   52 },
	{        "ISO_8859-5:1988",   52 },
	{             "ISO_8859-6",   53 },
	{        "ISO_8859-6:1987",   53 },
	{             "ISO_8859-7",   54 },
	{        "ISO_8859-7:1987",   54 },
	{             "ISO_8859-8",   55 },
	{        "ISO_8859-8:1988",   55 },
	{             "ISO_8859-9",   56 },
	{        "ISO_8859-9:1989",   56 },
	{                   "JAVA",   62 },
	{                "JIS0208",   61 },
	{          "JISX0201-1976",   63 },
	{      "JIS_C6220-1969-RO",   57 },
	{         "JIS_C6226-1983",   61 },
	{              "JIS_X0201",   63 },
	{              "JIS_X0208",   61 },
	{         "JIS_X0208-1983",   61 },
	{         "JIS_X0208-1990",   61 },
	{              "JIS_X0212",   59 },
	{         "JIS_X0212-1990",   59 },
	{       "JIS_X0212.1990-0",   59 },
	{                  "JOHAB",   22 },
	{                     "JP",   57 },
	{                 "KOI8-R",   64 },
	{                "KOI8-RU",   65 },
	{                 "KOI8-T",   66 },
	{                 "KOI8-U",   67 },
	{                 "KOREAN",   58 },
	{               "KSC_5601",   58 },
	{         "KS_C_5601-1987",   58 },
	{         "KS_C_5601-1989",   58 },
	{                     "L1",    0 },
	{                     "L2",   49 },
	{                     "L3",   50 },
	{                     "L4",   51 },
	{                     "L5",   56 },
	{                     "L6",   44 },
	{                     "L7",   45 },
	{                     "L8",   46 },
	{                 "LATIN1",    0 },
	{                 "LATIN2",   49 },
	{                 "LATIN3",   50 },
	{                 "LATIN4",   51 },
	{                 "LATIN5",   56 },
	{                 "LATIN6",   44 },
	{                 "LATIN7",   45 },
	{                 "LATIN8",   46 },
	{                    "MAC",   68 },
	{              "MACARABIC",   69 },
	{       "MACCENTRALEUROPE",   70 },
	{            "MACCROATIAN",   71 },
	{            "MACCYRILLIC",   72 },
	{               "MACGREEK",   73 },
	{              "MACHEBREW",   74 },
	{             "MACICELAND",   75 },
	{              "MACINTOSH",   68 },
	{               "MACROMAN",   68 },
	{             "MACROMANIA",   76 },
	{                "MACTHAI",   77 },
	{             "MACTURKISH",   78 },
	{             "MACUKRAINE",   79 },
	{                "MS-ANSI",   15 },
	{                "MS-ARAB",   19 },
	{                "MS-CYRL",   14 },
	{                  "MS-EE",   13 },
	{               "MS-GREEK",   16 },
	{                "MS-HEBR",   18 },
	{                "MS-TURK",   17 },
	{               "MS_KANJI",   83 },
	{              "MULELAO-1",   80 },
	{               "NEXTSTEP",   81 },
	{                     "R8",   82 },
	{                 "ROMAN8",   82 },
	{              "SHIFT-JIS",   83 },
	{              "SHIFT_JIS",   83 },
	{                   "SJIS",   83 },
	{                   "TCVN",   84 },
	{              "TCVN-5712",   84 },
	{             "TCVN5712-1",   84 },
	{        "TCVN5712-1:1993",   84 },
	{                "TIS-620",   60 },
	{                 "TIS620",   60 },
	{               "TIS620-0",   60 },
	{          "TIS620.2529-1",   60 },
	{          "TIS620.2533-0",   60 },
	{          "TIS620.2533-1",   60 },
	{                  "UCS-2",   85 },
	{         "UCS-2-INTERNAL",   86 },
	{          "UCS-2-SWAPPED",   87 },
	{                "UCS-2BE",    3 },
	{                "UCS-2LE",    2 },
	{                  "UCS-4",   88 },
	{         "UCS-4-INTERNAL",   89 },
	{          "UCS-4-SWAPPED",   90 },
	{                "UCS-4BE",   91 },
	{                "UCS-4LE",   92 },
	{                   "UCS2",   85 },
	{                   "UCS4",   88 },
	{                    "UHC",   29 },
	{            "UNICODE-1-1",    3 },
	{      "UNICODE-1-1-UTF-7",  100 },
	{             "UNICODEBIG",    3 },
	{          "UNICODELITTLE",    2 },
	{                     "US",   93 },
	{               "US-ASCII",   93 },
	{                 "UTF-16",   94 },
	{               "UTF-16BE",   95 },
	{               "UTF-16LE",   96 },
	{                 "UTF-32",   97 },
	{               "UTF-32BE",   98 },
	{               "UTF-32LE",   99 },
	{                  "UTF-7",  100 },
	{                  "UTF-8",    1 },
	{                  "UTF16",   94 },
	{                   "UTF7",  100 },
	{                   "UTF8",    1 },
	{                 "VISCII",  101 },
	{            "VISCII1.1-1",  101 },
	{             "WINBALTRIM",   20 },
	{           "WINDOWS-1250",   13 },
	{           "WINDOWS-1251",   14 },
	{           "WINDOWS-1252",   15 },
	{           "WINDOWS-1253",   16 },
	{           "WINDOWS-1254",   17 },
	{           "WINDOWS-1255",   18 },
	{           "WINDOWS-1256",   19 },
	{           "WINDOWS-1257",   20 },
	{           "WINDOWS-1258",   21 },
	{            "WINDOWS-874",   26 },
	{                  "X0201",   63 },
	{                  "X0208",   61 },
	{                  "X0212",   59 },
	{                   "big5",    5 },
	{                 "cp1250",   13 },
	{                 "cp1251",   14 },
	{                 "cp1252",   15 },
	{                 "cp1253",   16 },
	{                 "cp1254",   17 },
	{                 "cp1255",   18 },
	{                 "cp1256",   19 },
	{                 "cp1257",   20 },
	{                 "cp1258",   21 },
	{                  "cp850",   23 },
	{                  "cp862",   24 },
	{                  "cp866",   25 },
	{                  "cp874",   26 },
	{                  "eucJP",   31 },
	{                  "eucKR",   32 },
	{                  "eucTW",   33 },
	{                 "hp15CN",    8 },
	{                  "iso81",    0 },
	{                 "iso815",   47 },
	{                  "iso82",   49 },
	{                  "iso83",   50 },
	{                  "iso84",   51 },
	{                  "iso85",   52 },
	{                  "iso86",   53 },
	{                  "iso87",   54 },
	{                  "iso88",   55 },
	{               "iso88591",    0 },
	{              "iso885915",   47 },
	{               "iso88592",   49 },
	{               "iso88593",   50 },
	{               "iso88594",   51 },
	{               "iso88595",   52 },
	{               "iso88596",   53 },
	{               "iso88597",   54 },
	{               "iso88598",   55 },
	{               "iso88599",   56 },
	{                  "iso89",   56 },
	{                  "roma8",   82 },
	{                 "roman8",   82 },
	{                   "sjis",   83 },
	{                  "thai8",   60 },
	{                 "tis620",   60 },
	{                   "ucs2",   85 },
	{                   "ucs4",   88 },
	{                   "utf8",    1 },
	{NULL,	0}
};

static const CHARACTER_SET_ALIAS sybase_aliases[] = {
	{           "ascii_8",   0 },
	{              "big5",   5 },
	{            "cp1250",  13 },
	{            "cp1251",  14 },
	{            "cp1252",  15 },
	{            "cp1253",  16 },
	{            "cp1254",  17 },
	{            "cp1255",  18 },
	{            "cp1256",  19 },
	{            "cp1257",  20 },
	{            "cp1258",  21 },
	{             "cp850",  23 },
	{             "cp862",  24 },
	{             "cp866",  25 },
	{             "cp874",  26 },
	{             "cp932",  27 },
	{             "cp936",  28 },
	{             "cp949",  29 },
	{             "cp950",  30 },
	{            "greek8",  54 },
	{             "iso10",  44 },
	{             "iso13",  45 },
	{             "iso14",  46 },
	{             "iso15",  47 },
	{            "iso646",  93 },
	{          "iso88592",  49 },
	{          "iso88595",  52 },
	{          "iso88596",  53 },
	{          "iso88597",  54 },
	{          "iso88598",  55 },
	{          "iso88599",  56 },
	{             "iso_1",   0 },
	{              "koi8",  64 },
	{               "mac",  68 },
	{           "mac_cyr",  72 },
	{          "macgreek",  73 },
	{           "macthai",  77 },
	{           "macturk",  78 },
	{            "roman8",  82 },
	{              "sjis",  83 },
	{            "tis620",  60 },
	{              "utf8",   1 },
	{NULL,	0}
};

