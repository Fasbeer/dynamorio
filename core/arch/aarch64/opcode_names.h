/* This file was generated by codec.py from codec.txt. */

#ifndef OPCODE_NAMES_H
#define OPCODE_NAMES_H 1

const char *opcode_names[] = {
/*   0 */ "<invalid>",
/*   1 */ "<undecoded>",
/*   2 */ "<contd>",
/*   3 */ "<label>",
/*   4 */ "adc",
/*   5 */ "adcs",
/*   6 */ "add",
/*   7 */ "adds",
/*   8 */ "adr",
/*   9 */ "adrp",
/*  10 */ "and",
/*  11 */ "ands",
/*  12 */ "asrv",
/*  13 */ "b",
/*  14 */ "bcond",
/*  15 */ "bfm",
/*  16 */ "bic",
/*  17 */ "bics",
/*  18 */ "bl",
/*  19 */ "blr",
/*  20 */ "br",
/*  21 */ "brk",
/*  22 */ "cas",
/*  23 */ "casa",
/*  24 */ "casab",
/*  25 */ "casah",
/*  26 */ "casal",
/*  27 */ "casalb",
/*  28 */ "casalh",
/*  29 */ "casb",
/*  30 */ "cash",
/*  31 */ "casl",
/*  32 */ "caslb",
/*  33 */ "caslh",
/*  34 */ "casp",
/*  35 */ "caspa",
/*  36 */ "caspal",
/*  37 */ "caspl",
/*  38 */ "cbnz",
/*  39 */ "cbz",
/*  40 */ "ccmn",
/*  41 */ "ccmp",
/*  42 */ "clrex",
/*  43 */ "cls",
/*  44 */ "clz",
/*  45 */ "crc32b",
/*  46 */ "crc32cb",
/*  47 */ "crc32ch",
/*  48 */ "crc32cw",
/*  49 */ "crc32cx",
/*  50 */ "crc32h",
/*  51 */ "crc32w",
/*  52 */ "crc32x",
/*  53 */ "csel",
/*  54 */ "csinc",
/*  55 */ "csinv",
/*  56 */ "csneg",
/*  57 */ "dmb",
/*  58 */ "dsb",
/*  59 */ "eon",
/*  60 */ "eor",
/*  61 */ "extr",
/*  62 */ "fadd",
/*  63 */ "hlt",
/*  64 */ "hvc",
/*  65 */ "isb",
/*  66 */ "ld1",
/*  67 */ "ld1r",
/*  68 */ "ld2",
/*  69 */ "ld2r",
/*  70 */ "ld3",
/*  71 */ "ld3r",
/*  72 */ "ld4",
/*  73 */ "ld4r",
/*  74 */ "ldadd",
/*  75 */ "ldadda",
/*  76 */ "ldaddab",
/*  77 */ "ldaddah",
/*  78 */ "ldaddal",
/*  79 */ "ldaddalb",
/*  80 */ "ldaddalh",
/*  81 */ "ldaddb",
/*  82 */ "ldaddh",
/*  83 */ "ldaddl",
/*  84 */ "ldaddlb",
/*  85 */ "ldaddlh",
/*  86 */ "ldar",
/*  87 */ "ldarb",
/*  88 */ "ldarh",
/*  89 */ "ldaxp",
/*  90 */ "ldaxr",
/*  91 */ "ldaxrb",
/*  92 */ "ldaxrh",
/*  93 */ "ldclr",
/*  94 */ "ldclra",
/*  95 */ "ldclrab",
/*  96 */ "ldclrah",
/*  97 */ "ldclral",
/*  98 */ "ldclralb",
/*  99 */ "ldclralh",
/* 100 */ "ldclrb",
/* 101 */ "ldclrh",
/* 102 */ "ldclrl",
/* 103 */ "ldclrlb",
/* 104 */ "ldclrlh",
/* 105 */ "ldeor",
/* 106 */ "ldeora",
/* 107 */ "ldeorab",
/* 108 */ "ldeorah",
/* 109 */ "ldeoral",
/* 110 */ "ldeoralb",
/* 111 */ "ldeoralh",
/* 112 */ "ldeorb",
/* 113 */ "ldeorh",
/* 114 */ "ldeorl",
/* 115 */ "ldeorlb",
/* 116 */ "ldeorlh",
/* 117 */ "ldnp",
/* 118 */ "ldp",
/* 119 */ "ldpsw",
/* 120 */ "ldr",
/* 121 */ "ldrb",
/* 122 */ "ldrh",
/* 123 */ "ldrsb",
/* 124 */ "ldrsh",
/* 125 */ "ldrsw",
/* 126 */ "ldset",
/* 127 */ "ldseta",
/* 128 */ "ldsetab",
/* 129 */ "ldsetah",
/* 130 */ "ldsetal",
/* 131 */ "ldsetalb",
/* 132 */ "ldsetalh",
/* 133 */ "ldsetb",
/* 134 */ "ldseth",
/* 135 */ "ldsetl",
/* 136 */ "ldsetlb",
/* 137 */ "ldsetlh",
/* 138 */ "ldsmax",
/* 139 */ "ldsmaxa",
/* 140 */ "ldsmaxab",
/* 141 */ "ldsmaxah",
/* 142 */ "ldsmaxal",
/* 143 */ "ldsmaxalb",
/* 144 */ "ldsmaxalh",
/* 145 */ "ldsmaxb",
/* 146 */ "ldsmaxh",
/* 147 */ "ldsmaxl",
/* 148 */ "ldsmaxlb",
/* 149 */ "ldsmaxlh",
/* 150 */ "ldsmin",
/* 151 */ "ldsmina",
/* 152 */ "ldsminab",
/* 153 */ "ldsminah",
/* 154 */ "ldsminal",
/* 155 */ "ldsminalb",
/* 156 */ "ldsminalh",
/* 157 */ "ldsminb",
/* 158 */ "ldsminh",
/* 159 */ "ldsminl",
/* 160 */ "ldsminlb",
/* 161 */ "ldsminlh",
/* 162 */ "ldtr",
/* 163 */ "ldtrb",
/* 164 */ "ldtrh",
/* 165 */ "ldtrsb",
/* 166 */ "ldtrsh",
/* 167 */ "ldtrsw",
/* 168 */ "ldumax",
/* 169 */ "ldumaxa",
/* 170 */ "ldumaxab",
/* 171 */ "ldumaxah",
/* 172 */ "ldumaxal",
/* 173 */ "ldumaxalb",
/* 174 */ "ldumaxalh",
/* 175 */ "ldumaxb",
/* 176 */ "ldumaxh",
/* 177 */ "ldumaxl",
/* 178 */ "ldumaxlb",
/* 179 */ "ldumaxlh",
/* 180 */ "ldumin",
/* 181 */ "ldumina",
/* 182 */ "lduminab",
/* 183 */ "lduminah",
/* 184 */ "lduminal",
/* 185 */ "lduminalb",
/* 186 */ "lduminalh",
/* 187 */ "lduminb",
/* 188 */ "lduminh",
/* 189 */ "lduminl",
/* 190 */ "lduminlb",
/* 191 */ "lduminlh",
/* 192 */ "ldur",
/* 193 */ "ldurb",
/* 194 */ "ldurh",
/* 195 */ "ldursb",
/* 196 */ "ldursh",
/* 197 */ "ldursw",
/* 198 */ "ldxp",
/* 199 */ "ldxr",
/* 200 */ "ldxrb",
/* 201 */ "ldxrh",
/* 202 */ "lslv",
/* 203 */ "lsrv",
/* 204 */ "madd",
/* 205 */ "movk",
/* 206 */ "movn",
/* 207 */ "movz",
/* 208 */ "mrs",
/* 209 */ "msr",
/* 210 */ "msub",
/* 211 */ "nop",
/* 212 */ "orn",
/* 213 */ "orr",
/* 214 */ "prfm",
/* 215 */ "prfum",
/* 216 */ "rbit",
/* 217 */ "ret",
/* 218 */ "rev",
/* 219 */ "rev16",
/* 220 */ "rev32",
/* 221 */ "rorv",
/* 222 */ "sbc",
/* 223 */ "sbcs",
/* 224 */ "sbfm",
/* 225 */ "sdiv",
/* 226 */ "sev",
/* 227 */ "sevl",
/* 228 */ "smaddl",
/* 229 */ "smc",
/* 230 */ "smsubl",
/* 231 */ "smulh",
/* 232 */ "st1",
/* 233 */ "st2",
/* 234 */ "st3",
/* 235 */ "st4",
/* 236 */ "stlr",
/* 237 */ "stlrb",
/* 238 */ "stlrh",
/* 239 */ "stlxp",
/* 240 */ "stlxr",
/* 241 */ "stlxrb",
/* 242 */ "stlxrh",
/* 243 */ "stnp",
/* 244 */ "stp",
/* 245 */ "str",
/* 246 */ "strb",
/* 247 */ "strh",
/* 248 */ "sttr",
/* 249 */ "sttrb",
/* 250 */ "sttrh",
/* 251 */ "stur",
/* 252 */ "sturb",
/* 253 */ "sturh",
/* 254 */ "stxp",
/* 255 */ "stxr",
/* 256 */ "stxrb",
/* 257 */ "stxrh",
/* 258 */ "sub",
/* 259 */ "subs",
/* 260 */ "svc",
/* 261 */ "swp",
/* 262 */ "swpa",
/* 263 */ "swpab",
/* 264 */ "swpah",
/* 265 */ "swpal",
/* 266 */ "swpalb",
/* 267 */ "swpalh",
/* 268 */ "swpb",
/* 269 */ "swph",
/* 270 */ "swpl",
/* 271 */ "swplb",
/* 272 */ "swplh",
/* 273 */ "sys",
/* 274 */ "tbnz",
/* 275 */ "tbz",
/* 276 */ "ubfm",
/* 277 */ "udiv",
/* 278 */ "umaddl",
/* 279 */ "umsubl",
/* 280 */ "umulh",
/* 281 */ "wfe",
/* 282 */ "wfi",
/* 283 */ "yield",
          "ldstex",
          "xx",
};

#endif /* OPCODE_NAMES_H */
