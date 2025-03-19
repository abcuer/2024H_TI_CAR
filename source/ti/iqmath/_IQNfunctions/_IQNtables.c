#include <stdint.h>

#include "_IQNtables.h"

/* 
 *  Coefficients, parameters and lookup tables used for CPU approximations
 */

/* cos */
const int_fast32_t _IQ31CosLookup[52] = {
    2147483647, 2147221509, 2146435157, 2145124784,
    2143290709, 2140933381, 2138053374, 2134651392,
    2130728266, 2126284953, 2121322538, 2115842232,
    2109845374, 2103333428, 2096307983, 2088770754,
    2080723582, 2072168431, 2063107390, 2053542671,
    2043476608, 2032911661, 2021850407, 2010295547,
    1998249902, 1985716414, 1972698141, 1959198262,
    1945220073, 1930766987, 1915842531, 1900450350,
    1884594201, 1868277956, 1851505597, 1834281220,
    1816609030, 1798493340, 1779938574, 1760949261,
    1741530038, 1721685646, 1701420928, 1680740833,
    1659650409, 1638154806, 1616259270, 1593969148,
    1571289881, 1548227007, 1524786154, 1500973048
};

/* sin */
const int_fast32_t _IQ31SinLookup[52] = {
           0,   33553067,   67097942,  100626436,
    134130364,  167601545,  201031810,  234412995,
    267736951,  300995544,  334180652,  367284176,
    400298032,  433214161,  466024527,  498721120,
    531295957,  563741086,  596048586,  628210568,
    660219183,  692066614,  723745087,  755246868,
    786564267,  817689637,  848615380,  879333946,
    909837834,  940119599,  970171848,  999987242,
    1029558505, 1058878415, 1087939815, 1116735610,
    1145258771, 1173502333, 1201459401, 1229123150,
    1256486826, 1283543749, 1310287313, 1336710990,
    1362808327, 1388572955, 1413998582, 1439079002,
    1463808091, 1488179813, 1512188216, 1535827441
};

/* Asin */
const int_fast32_t _IQ29Asin_coeffs[17][5] = {
    {  3149732,   89392309,       962, 536870908,       0},
    {  9526495,   88593699,     40416, 536870004,       8},
    { 16138900,   86937495,    197996, 536863257,     118},
    { 23156787,   84300941,    571586, 536839597,     683},
    { 30770290,   80487362,   1290238, 536779215,    2591},
    { 39200158,   75209531,   2531955, 536649108,    7714},
    { 48710843,   68064494,   4547783, 536395980,   19650},
    { 59627725,   58496679,   7695660, 535935197,   44970},
    { 72359850,   45744506,  12489135, 535133733,   95261},
    { 87431720,   28762778,  19668817, 533783769,  190507},
    {105527689,    6109335,  30308851, 531561517,  364646},
    {127555573,  -24222672,  45978054, 527962405,  674787},
    {154739551,  -65056242,  68987651, 522197749, 1216568},
    {188758701, -120414117, 102778528, 513027743, 2150044},
    {231956922, -196114786, 152538402, 498486871, 3743891},
    {287669673, -300718733, 226205346, 475423960, 6452123},
    {287669673, -300718733, 226205346, 475423960, 6452123}    // repeat last set
};

/* atan */
const int_fast32_t _IQ32atan_coeffs[132] = {
    -227484580, -9261     , 683565333, 0        , 
    -224831707, -276221   , 683574534, -108     , 
    -219602897, -1274081  , 683638558, -1488    , 
    -211947885, -3443234  , 683844263, -8015    , 
    -202081292, -7157693  , 684311451, -27646   , 
    -190271590, -12705955 , 685181594, -73201   , 
    -176827842, -20278271 , 686604775, -162452  , 
    -162085247, -29960921 , 688726164, -317494  , 
    -146390502, -41737384 , 691673332, -563488  , 
    -130087951, -55495711 , 695545487, -926914  , 
    -113507288, -71040919 , 700405423, -1433559 , 
    -96953369 , -88110970 , 706274644, -2106439 , 
    -80698479 , -106394779, 713131732, -2963878 , 
    -64977126 , -125550747, 720913749, -4017911 , 
    -49983270 , -145224548, 729520198, -5273132 , 
    -35869738 , -165065147, 738818936, -6726059 , 
    -22749467 , -184738347, 748653357, -8365003 , 
    -10698168 , -203937495, 758850169, -10170435, 
    241989    , -222391214, 769227187, -12115749, 
    10058068  , -239868310, 779600651, -14168336, 
    18761768  , -256180110, 789791697, -16290870, 
    26384816  , -271180628, 799631786, -18442695, 
    32974556  , -284764983, 808966944, -20581230, 
    38589896  , -296866517, 817660829, -22663305, 
    43297701  , -307453021, 825596674, -24646386, 
    47169678  , -316522417, 832678225, -26489630, 
    50279770  , -324098234, 838829825, -28154764, 
    52702039  , -330225080, 843995800, -29606769, 
    54508999  , -334964326, 848139312, -30814380, 
    55770360  , -338390095, 851240831, -31750408, 
    56552116  , -340585675, 853296356, -32391901, 
    56915945  , -341640355, 854315504, -32720182, 
    56915945  , -341640355, 854315504, -32720182, 
};

/* exp */
const uint_fast32_t _IQ30exp_coeffs[11] = {
    0x00000127, 0x00000B93, 0x00006806, 0x00034034,
    0x0016C16C, 0x00888888, 0x02AAAAAA, 0x0AAAAAAA,
    0x20000000, 0x40000000, 0x40000000
};

const uint_fast32_t _IQNexp_min[30] = {
    0xffffffff,0xfffffffb,0xfffffff0,0xffffffd4,0xffffff92,0xfffffef6,
    0xfffffd93,0xfffffa75,0xfffff386,0xffffe447,0xffffc301,0xffff7aeb,
    0xfffedfa7,0xfffd92f1,0xfffacd29,0xfff4e8df,0xffe86ed9,0xffce17ea,
    0xff96a442,0xff223163,0xfe2e3482,0xfc300c7d,0xf8075fed,0xef5d4dc1,
    0xdd57b752,0xb7e9a644,0x80000000,0x80000000,0x80000000,0x80000000
};

const uint_fast32_t _IQNexp_max[30] = {
    0x00000029,0x00000050,0x0000009b,0x0000012b,0x00000240,0x00000455,
    0x00000851,0x00000ff1,0x00001e7f,0x00003a39,0x00006ee7,0x0000d2b7,
    0x00018f40,0x0002f224,0x00058b90,0x000a65af,0x0013687a,0x00240b2c,
    0x00428ac8,0x0079fe70,0x00ddce9d,0x018f40b5,0x02c5c85f,0x04da1ea7,
    0x0851591f,0x0ddce9df,0x162e42fe,0x2145647e,0x2c5c85fd,0x2c5c85fd
};

const uint_fast16_t _IQNexp_offset[30] = {
    0,1,2,2,3,4,4,5,6,6,7,8,
    9,9,10,11,11,12,13,13,14,
    15,15,16,17,18,18,19,20,20
};

const uint_fast32_t _IQNexp_lookup1[22] = {
    0x00000004, 0x0000000A, 0x0000001D, 0x00000050, 0x000000DA, 0x00000251,
    0x0000064D, 0x00001122, 0x00002E93, 0x00007E9C, 0x00015829, 0x0003A788,
    0x0009EF0B, 0x001B00B5, 0x004966B1, 0x00C78665, 0x021E5D7A, 0x05C24D23,
    0x0FA79104, 0x2A8DB1F3, 0x73AC222D, 0x00000000
};
const uint_fast32_t _IQNexp_lookup2[22] = {
    0x00000002, 0x00000008, 0x00000015, 0x0000003B, 0x000000A0, 0x000001B4,
    0x000004A3, 0x00000C9B, 0x00002245, 0x00005D27, 0x0000FD38, 0x0002B053,
    0x00074F11, 0x0013DE16, 0x0036016B, 0x0092CD62, 0x018F0CCA, 0x043CBAF4,
    0x0B849A46, 0x1F4F2209, 0x551B63E7, 0xE758445B
};
const uint_fast32_t _IQNexp_lookup3[22] = {
    0x00000002, 0x00000005, 0x00000010, 0x0000002B, 0x00000076, 0x00000141,
    0x00000369, 0x00000946, 0x00001936, 0x0000448A, 0x0000BA4F, 0x0001FA71,
    0x000560A7, 0x000E9E22, 0x0027BC2C, 0x006C02D6, 0x01259AC4, 0x031E1995,
    0x087975E8, 0x1709348C, 0x3E9E4412, 0xAA36C7CF
};
const uint_fast32_t _IQNexp_lookup4[22] = {
    0x00000004, 0x0000000B, 0x00000020, 0x00000056, 0x000000EC, 0x00000282,
    0x000006D3, 0x0000128D, 0x0000326D, 0x00008914, 0x0001749E, 0x0003F4E2,
    0x000AC14E, 0x001D3C44, 0x004F7859, 0x00D805AC, 0x024B3589, 0x063C332B,
    0x10F2EBD0, 0x2E126918, 0x7D3C8824, 0x00000000
};
const uint_fast32_t _IQNexp_lookup5[22] = {
    0x00000003, 0x00000008, 0x00000017, 0x00000040, 0x000000AD, 0x000001D8,
    0x00000505, 0x00000DA6, 0x0000251A, 0x000064DB, 0x00011228, 0x0002E93D,
    0x0007E9C5, 0x0015829D, 0x003A7889, 0x009EF0B2, 0x01B00B59, 0x04966B12,
    0x0C786657, 0x21E5D7A1, 0x5C24D230, 0xFA791048
};
const uint_fast32_t _IQNexp_lookup6[22] = {
    0x00000002, 0x00000006, 0x00000011, 0x0000002F, 0x00000080, 0x0000015B,
    0x000003B1, 0x00000A0A, 0x00001B4C, 0x00004A34, 0x0000C9B6, 0x00022451,
    0x0005D27A, 0x000FD38A, 0x002B053B, 0x0074F112, 0x013DE165, 0x036016B2,
    0x092CD624, 0x18F0CCAF, 0x43CBAF42, 0xB849A460
};
const uint_fast32_t _IQNexp_lookup7[22] = {
    0x00000004, 0x0000000C, 0x00000022, 0x0000005E, 0x00000100, 0x000002B7,
    0x00000763, 0x00001415, 0x00003699, 0x00009469, 0x0001936D, 0x000448A2,
    0x000BA4F5, 0x001FA715, 0x00560A77, 0x00E9E224, 0x027BC2CA, 0x06C02D64,
    0x1259AC48, 0x31E1995F, 0x87975E85, 0x00000000
};
const uint_fast32_t _IQNexp_lookup8[22] = {
    0x00000003, 0x00000009, 0x00000019, 0x00000045, 0x000000BC, 0x00000200,
    0x0000056F, 0x00000EC7, 0x0000282B, 0x00006D32, 0x000128D3, 0x000326DB,
    0x00089144, 0x001749EA, 0x003F4E2A, 0x00AC14EE, 0x01D3C448, 0x04F78595,
    0x0D805AC8, 0x24B35891, 0x63C332BE, 0x00000000
};
const uint_fast32_t _IQNexp_lookup9[22] = {
    0x00000002, 0x00000006, 0x00000012, 0x00000032, 0x0000008A, 0x00000178,
    0x00000400, 0x00000ADF, 0x00001D8E, 0x00005057, 0x0000DA64, 0x000251A7,
    0x00064DB7, 0x00112288, 0x002E93D4, 0x007E9C55, 0x015829DC, 0x03A78891,
    0x09EF0B2A, 0x1B00B591, 0x4966B122, 0xC786657D
};
const uint_fast32_t _IQNexp_lookup10[22] = {
    0x00000005, 0x0000000D, 0x00000025, 0x00000065, 0x00000115, 0x000002F1,
    0x00000800, 0x000015BF, 0x00003B1C, 0x0000A0AF, 0x0001B4C9, 0x0004A34E,
    0x000C9B6E, 0x00224510, 0x005D27A9, 0x00FD38AB, 0x02B053B9, 0x074F1122,
    0x13DE1654, 0x36016B22, 0x92CD6245, 0x00000000
};
const uint_fast32_t _IQNexp_lookup11[22] = {
    0x00000003, 0x0000000A, 0x0000001B, 0x0000004B, 0x000000CB, 0x0000022A,
    0x000005E2, 0x00001000, 0x00002B7E, 0x00007639, 0x0001415E, 0x00036992,
    0x0009469C, 0x001936DC, 0x00448A21, 0x00BA4F53, 0x01FA7157, 0x0560A773,
    0x0E9E2244, 0x27BC2CA9, 0x6C02D645, 0x00000000
};
const uint_fast32_t _IQNexp_lookup12[22] = {
    0x00000002, 0x00000007, 0x00000014, 0x00000037, 0x00000096, 0x00000197,
    0x00000454, 0x00000BC5, 0x00002000, 0x000056FC, 0x0000EC73, 0x000282BC,
    0x0006D324, 0x00128D38, 0x00326DB8, 0x00891442, 0x01749EA7, 0x03F4E2AF,
    0x0AC14EE7, 0x1D3C4488, 0x4F785953, 0xD805AC8B
};
const uint_fast32_t _IQNexp_lookup13[22] = {
    0x00000002, 0x00000005, 0x0000000E, 0x00000028, 0x0000006E, 0x0000012C,
    0x0000032F, 0x000008A9, 0x0000178B, 0x00004000, 0x0000ADF8, 0x0001D8E6,
    0x00050579, 0x000DA648, 0x00251A71, 0x0064DB71, 0x01122885, 0x02E93D4F,
    0x07E9C55F, 0x15829DCF, 0x3A788911, 0x9EF0B2A6
};
const uint_fast32_t _IQNexp_lookup14[22] = {
    0x00000004, 0x0000000A, 0x0000001D, 0x00000051, 0x000000DC, 0x00000258,
    0x0000065F, 0x00001152, 0x00002F16, 0x00008000, 0x00015BF0, 0x0003B1CC,
    0x000A0AF2, 0x001B4C90, 0x004A34E2, 0x00C9B6E2, 0x0224510B, 0x05D27A9F,
    0x0FD38ABE, 0x2B053B9F, 0x74F11223, 0x00000000
};
const uint_fast32_t _IQNexp_lookup15[22] = {
    0x00000002, 0x00000008, 0x00000015, 0x0000003B, 0x000000A2, 0x000001B9,
    0x000004B0, 0x00000CBE, 0x000022A5, 0x00005E2D, 0x00010000, 0x0002B7E1,
    0x00076399, 0x001415E5, 0x00369920, 0x009469C4, 0x01936DC5, 0x0448A216,
    0x0BA4F53E, 0x1FA7157C, 0x560A773E, 0xE9E22447
};
const uint_fast32_t _IQNexp_lookup16[22] = {
    0x00000002, 0x00000005, 0x00000010, 0x0000002B, 0x00000077, 0x00000144,
    0x00000373, 0x00000960, 0x0000197D, 0x0000454A, 0x0000BC5A, 0x00020000,
    0x00056FC2, 0x000EC732, 0x00282BCB, 0x006D3240, 0x0128D389, 0x0326DB8A,
    0x0891442D, 0x1749EA7D, 0x3F4E2AF8, 0xAC14EE7C
};
const uint_fast32_t _IQNexp_lookup17[22] = {
    0x00000004, 0x0000000B, 0x00000020, 0x00000057, 0x000000EF, 0x00000289,
    0x000006E6, 0x000012C1, 0x000032FB, 0x00008A95, 0x000178B5, 0x00040000,
    0x000ADF85, 0x001D8E64, 0x00505796, 0x00DA6481, 0x0251A713, 0x064DB715,
    0x1122885A, 0x2E93D4FA, 0x7E9C55F1, 0x00000000
};
const uint_fast32_t _IQNexp_lookup18[22] = {
    0x00000003, 0x00000008, 0x00000017, 0x00000040, 0x000000AF, 0x000001DE,
    0x00000513, 0x00000DCC, 0x00002582, 0x000065F6, 0x0001152A, 0x0002F16A,
    0x00080000, 0x0015BF0A, 0x003B1CC9, 0x00A0AF2D, 0x01B4C902, 0x04A34E26,
    0x0C9B6E2B, 0x224510B5, 0x5D27A9F5, 0xFD38ABE2
};
const uint_fast32_t _IQNexp_lookup19[22] = {
    0x00000002, 0x00000006, 0x00000011, 0x0000002F, 0x00000081, 0x0000015F,
    0x000003BC, 0x00000A27, 0x00001B99, 0x00004B05, 0x0000CBED, 0x00022A55,
    0x0005E2D5, 0x00100000, 0x002B7E15, 0x00763992, 0x01415E5B, 0x03699205,
    0x09469C4C, 0x1936DC56, 0x448A216A, 0xBA4F53EA
};
const uint_fast32_t _IQNexp_lookup20[22] = {
    0x00000004, 0x0000000C, 0x00000023, 0x0000005F, 0x00000102, 0x000002BF,
    0x00000778, 0x0000144E, 0x00003732, 0x0000960A, 0x000197DB, 0x000454AA,
    0x000BC5AB, 0x00200000, 0x0056FC2A, 0x00EC7325, 0x0282BCB7, 0x06D3240B,
    0x128D3899, 0x326DB8AD, 0x891442D5, 0x00000000
};
const uint_fast32_t _IQNexp_lookup21[22] = {
    0x00000003, 0x00000009, 0x00000019, 0x00000046, 0x000000BE, 0x00000205,
    0x0000057F, 0x00000EF0, 0x0000289C, 0x00006E64, 0x00012C15, 0x00032FB6,
    0x0008A955, 0x00178B56, 0x00400000, 0x00ADF854, 0x01D8E64B, 0x0505796F,
    0x0DA64817, 0x251A7132, 0x64DB715A, 0x00000000
};
const uint_fast32_t _IQNexp_lookup22[22] = {
    0x00000002, 0x00000006, 0x00000012, 0x00000033, 0x0000008C, 0x0000017C,
    0x0000040B, 0x00000AFE, 0x00001DE1, 0x00005139, 0x0000DCC9, 0x0002582A, 
    0x00065F6C, 0x001152AA, 0x002F16AC, 0x00800000, 0x015BF0A8, 0x03B1CC97, 
    0x0A0AF2DF, 0x1B4C902E, 0x4A34E265, 0xC9B6E2B4
};
const uint_fast32_t _IQNexp_lookup23[22] = {
    0x00000005, 0x0000000D, 0x00000025, 0x00000067, 0x00000118, 0x000002F9,
    0x00000816, 0x000015FC, 0x00003BC2, 0x0000A272, 0x0001B993, 0x0004B055,
    0x000CBED8, 0x0022A555, 0x005E2D58, 0x01000000, 0x02B7E151, 0x0763992E,
    0x1415E5BF, 0x3699205C, 0x9469C4CB, 0x00000000
};
const uint_fast32_t _IQNexp_lookup24[22] = {
    0x00000003, 0x0000000A, 0x0000001B, 0x0000004B, 0x000000CE, 0x00000230,
    0x000005F3, 0x0000102C, 0x00002BF8, 0x00007785, 0x000144E5, 0x00037327,
    0x000960AA, 0x00197DB0, 0x00454AAA, 0x00BC5AB1, 0x02000000, 0x056FC2A2,
    0x0EC7325C, 0x282BCB7E, 0x6D3240B8, 0x00000000
};
const uint_fast32_t _IQNexp_lookup25[22] = {
    0x00000002, 0x00000007, 0x00000014, 0x00000037, 0x00000097, 0x0000019C,
    0x00000460, 0x00000BE6, 0x00002059, 0x000057F0, 0x0000EF0B, 0x000289CA,
    0x0006E64F, 0x0012C155, 0x0032FB61, 0x008A9555, 0x0178B563, 0x04000000,
    0x0ADF8545, 0x1D8E64B8, 0x505796FD, 0xDA648171
};
const uint_fast32_t _IQNexp_lookup26[22] = {
    0x00000002, 0x00000005, 0x0000000F, 0x00000029, 0x0000006F, 0x0000012F,
    0x00000338, 0x000008C1, 0x000017CD, 0x000040B3, 0x0000AFE1, 0x0001DE16,
    0x00051394, 0x000DCC9F, 0x002582AB, 0x0065F6C3, 0x01152AAA, 0x02F16AC6,
    0x08000000, 0x15BF0A8B, 0x3B1CC971, 0xA0AF2DFB
};
const uint_fast32_t _IQNexp_lookup27[22] = {
    0x00000004, 0x0000000B, 0x0000001E, 0x00000052, 0x000000DF, 0x0000025E,
    0x00000671, 0x00001183, 0x00002F9A, 0x00008167, 0x00015FC2, 0x0003BC2D,
    0x000A2728, 0x001B993F, 0x004B0556, 0x00CBED86, 0x022A5554, 0x05E2D58D,
    0x10000000, 0x2B7E1516, 0x763992E3, 0x00000000
};
const uint_fast32_t _IQNexp_lookup28[22] = {
    0x00000003, 0x00000008, 0x00000016, 0x0000003C, 0x000000A4, 0x000001BE,
    0x000004BD, 0x00000CE2, 0x00002306, 0x00005F35, 0x000102CF, 0x0002BF84,
    0x0007785A, 0x00144E51, 0x0037327F, 0x00960AAD, 0x0197DB0C, 0x0454AAA8,
    0x0BC5AB1B, 0x20000000, 0x56FC2A2C, 0xEC7325C6
};
const uint_fast32_t _IQNexp_lookup29[22] = {
    0x00000002, 0x00000006, 0x00000010, 0x0000002C, 0x00000078, 0x00000148,
    0x0000037C, 0x0000097B, 0x000019C5, 0x0000460D, 0x0000BE6B, 0x0002059E,
    0x00057F08, 0x000EF0B5, 0x00289CA3, 0x006E64FF, 0x012C155B, 0x032FB619,
    0x08A95551, 0x178B5636, 0x40000000, 0xADF85458
};
const uint_fast32_t _IQNexp_lookup30[22] = {
    0x00000004, 0x0000000C, 0x00000020, 0x00000058, 0x000000F1, 0x00000290,
    0x000006F9, 0x000012F6, 0x0000338A, 0x00008C1A, 0x00017CD7, 0x00040B3C,
    0x000AFE10, 0x001DE16B, 0x00513947, 0x00DCC9FF, 0x02582AB7, 0x065F6C33,
    0x1152AAA3, 0x2F16AC6C, 0x80000000, 0x00000000
};

/* log */
const uint_fast32_t _IQNlog_min[5] = {
    0x00000010, 0x00015FC3, 0x00960AAE, 0x08A95552, 0x2F16AC6D
};

const uint_fast32_t _IQ30log_coeffs[15] = {
    0xfb6db6db, 0x04ec4ec4, 0xfaaaaaab, 0x05d1745d, 0xf999999a, 
    0x071c71c7, 0xf8000000, 0x09249249, 0xf5555556, 0x0ccccccc,
    0xf0000000, 0x15555555, 0xe0000000, 0x40000000, 0x00000000
};

/* div */
const uint8_t _IQ6div_lookup[65] = {
    0x7F, 0x7D, 0x7B, 0x79, 0x78, 0x76, 0x74, 0x73, 
    0x71, 0x6F, 0x6E, 0x6D, 0x6B, 0x6A, 0x68, 0x67, 
    0x66, 0x65, 0x63, 0x62, 0x61, 0x60, 0x5F, 0x5E, 
    0x5D, 0x5C, 0x5B, 0x5A, 0x59, 0x58, 0x57, 0x56, 
    0x55, 0x54, 0x53, 0x52, 0x52, 0x51, 0x50, 0x4F, 
    0x4E, 0x4E, 0x4D, 0x4C, 0x4C, 0x4B, 0x4A, 0x49, 
    0x49, 0x48, 0x48, 0x47, 0x46, 0x46, 0x45, 0x45, 
    0x44, 0x43, 0x43, 0x42, 0x42, 0x41, 0x41, 0x40, 0x40
};


/* sqrt */
const uint_fast16_t _IQ14sqrt_lookup[96] = {
    0x7f02, 0x7d19, 0x7b46, 0x7986, 0x77d9, 0x763d, 0x74b2, 0x7335, 
    0x71c7, 0x7066, 0x6f11, 0x6dc8, 0x6c8b, 0x6b58, 0x6a2f, 0x690f, 
    0x67f8, 0x66ea, 0x65e4, 0x64e5, 0x63ee, 0x62fe, 0x6214, 0x6131, 
    0x6054, 0x5f7d, 0x5eab, 0x5dde, 0x5d17, 0x5c54, 0x5b96, 0x5add, 
    0x5a28, 0x5977, 0x58ca, 0x5821, 0x577c, 0x56da, 0x563c, 0x55a1, 
    0x5509, 0x5475, 0x53e3, 0x5354, 0x52c9, 0x523f, 0x51b9, 0x5135, 
    0x50b3, 0x5034, 0x4fb7, 0x4f3d, 0x4ec4, 0x4e4e, 0x4dda, 0x4d68, 
    0x4cf7, 0x4c89, 0x4c1d, 0x4bb2, 0x4b49, 0x4ae1, 0x4a7c, 0x4a18, 
    0x49b5, 0x4954, 0x48f4, 0x4896, 0x483a, 0x47de, 0x4784, 0x472c, 
    0x46d4, 0x467e, 0x4629, 0x45d6, 0x4583, 0x4532, 0x44e1, 0x4492, 
    0x4444, 0x43f7, 0x43aa, 0x435f, 0x4315, 0x42cc, 0x4284, 0x423c, 
    0x41f6, 0x41b0, 0x416b, 0x4127, 0x40e4, 0x40a2, 0x4060, 0x4020
};

/* shift with mpy */
//const uint_fast32_t _IQNshift32[32] = {
//    0xffffffff, 0x80000000, 0x40000000, 0x20000000, 
//    0x10000000, 0x08000000, 0x04000000, 0x02000000, 
//    0x01000000, 0x00800000, 0x00400000, 0x00200000, 
//    0x00100000, 0x00080000, 0x00040000, 0x00020000, 
//    0x00010000, 0x00008000, 0x00004000, 0x00002000, 
//    0x00001000, 0x00000800, 0x00000400, 0x00000200, 
//    0x00000100, 0x00000080, 0x00000040, 0x00000020, 
//    0x00000010, 0x00000008, 0x00000004, 0x00000002
//};
