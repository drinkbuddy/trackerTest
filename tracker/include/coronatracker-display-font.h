#include <Arduino.h>

// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Nimbus_Sans_L_Regular_Condensed_15[] PROGMEM = {
	0x0C, // Width: 12
	0x14, // Height: 20
	0x20, // First Char: 32
	0xE0, // Numbers of Chars: 224

	// Jump Table:
	0xFF, 0xFF, 0x00, 0x03,  // 32:65535
	0x00, 0x00, 0x05, 0x03,  // 33:0
	0x00, 0x05, 0x0A, 0x04,  // 34:5
	0x00, 0x0F, 0x11, 0x07,  // 35:15
	0x00, 0x20, 0x11, 0x07,  // 36:32
	0x00, 0x31, 0x20, 0x0B,  // 37:49
	0x00, 0x51, 0x17, 0x08,  // 38:81
	0x00, 0x68, 0x04, 0x02,  // 39:104
	0x00, 0x6C, 0x09, 0x04,  // 40:108
	0x00, 0x75, 0x08, 0x04,  // 41:117
	0x00, 0x7D, 0x0B, 0x05,  // 42:125
	0x00, 0x88, 0x14, 0x07,  // 43:136
	0x00, 0x9C, 0x06, 0x03,  // 44:156
	0x00, 0xA2, 0x0B, 0x04,  // 45:162
	0x00, 0xAD, 0x05, 0x03,  // 46:173
	0x00, 0xB2, 0x07, 0x03,  // 47:178
	0x00, 0xB9, 0x11, 0x07,  // 48:185
	0x00, 0xCA, 0x0B, 0x07,  // 49:202
	0x00, 0xD5, 0x11, 0x07,  // 50:213
	0x00, 0xE6, 0x11, 0x07,  // 51:230
	0x00, 0xF7, 0x11, 0x07,  // 52:247
	0x01, 0x08, 0x11, 0x07,  // 53:264
	0x01, 0x19, 0x11, 0x07,  // 54:281
	0x01, 0x2A, 0x10, 0x07,  // 55:298
	0x01, 0x3A, 0x11, 0x07,  // 56:314
	0x01, 0x4B, 0x11, 0x07,  // 57:331
	0x01, 0x5C, 0x05, 0x03,  // 58:348
	0x01, 0x61, 0x06, 0x03,  // 59:353
	0x01, 0x67, 0x14, 0x07,  // 60:359
	0x01, 0x7B, 0x14, 0x07,  // 61:379
	0x01, 0x8F, 0x14, 0x07,  // 62:399
	0x01, 0xA3, 0x10, 0x07,  // 63:419
	0x01, 0xB3, 0x20, 0x0C,  // 64:435
	0x01, 0xD3, 0x17, 0x08,  // 65:467
	0x01, 0xEA, 0x17, 0x08,  // 66:490
	0x02, 0x01, 0x17, 0x09,  // 67:513
	0x02, 0x18, 0x17, 0x09,  // 68:536
	0x02, 0x2F, 0x14, 0x08,  // 69:559
	0x02, 0x43, 0x13, 0x08,  // 70:579
	0x02, 0x56, 0x1A, 0x0A,  // 71:598
	0x02, 0x70, 0x17, 0x09,  // 72:624
	0x02, 0x87, 0x05, 0x03,  // 73:647
	0x02, 0x8C, 0x0E, 0x06,  // 74:652
	0x02, 0x9A, 0x17, 0x08,  // 75:666
	0x02, 0xB1, 0x11, 0x07,  // 76:689
	0x02, 0xC2, 0x1A, 0x0A,  // 77:706
	0x02, 0xDC, 0x17, 0x09,  // 78:732
	0x02, 0xF3, 0x1A, 0x0A,  // 79:755
	0x03, 0x0D, 0x14, 0x08,  // 80:781
	0x03, 0x21, 0x1A, 0x0A,  // 81:801
	0x03, 0x3B, 0x17, 0x09,  // 82:827
	0x03, 0x52, 0x17, 0x08,  // 83:850
	0x03, 0x69, 0x13, 0x08,  // 84:873
	0x03, 0x7C, 0x17, 0x09,  // 85:892
	0x03, 0x93, 0x16, 0x08,  // 86:915
	0x03, 0xA9, 0x1F, 0x0C,  // 87:937
	0x03, 0xC8, 0x17, 0x08,  // 88:968
	0x03, 0xDF, 0x16, 0x08,  // 89:991
	0x03, 0xF5, 0x14, 0x08,  // 90:1013
	0x04, 0x09, 0x09, 0x03,  // 91:1033
	0x04, 0x12, 0x08, 0x03,  // 92:1042
	0x04, 0x1A, 0x09, 0x03,  // 93:1050
	0x04, 0x23, 0x11, 0x06,  // 94:1059
	0x04, 0x34, 0x15, 0x07,  // 95:1076
	0x04, 0x49, 0x04, 0x04,  // 96:1097
	0x04, 0x4D, 0x14, 0x07,  // 97:1101
	0x04, 0x61, 0x11, 0x07,  // 98:1121
	0x04, 0x72, 0x0E, 0x06,  // 99:1138
	0x04, 0x80, 0x11, 0x07,  // 100:1152
	0x04, 0x91, 0x11, 0x07,  // 101:1169
	0x04, 0xA2, 0x07, 0x03,  // 102:1186
	0x04, 0xA9, 0x12, 0x07,  // 103:1193
	0x04, 0xBB, 0x11, 0x07,  // 104:1211
	0x04, 0xCC, 0x05, 0x03,  // 105:1228
	0x04, 0xD1, 0x06, 0x03,  // 106:1233
	0x04, 0xD7, 0x11, 0x06,  // 107:1239
	0x04, 0xE8, 0x05, 0x03,  // 108:1256
	0x04, 0xED, 0x1A, 0x0A,  // 109:1261
	0x05, 0x07, 0x11, 0x07,  // 110:1287
	0x05, 0x18, 0x11, 0x07,  // 111:1304
	0x05, 0x29, 0x11, 0x07,  // 112:1321
	0x05, 0x3A, 0x12, 0x07,  // 113:1338
	0x05, 0x4C, 0x0A, 0x04,  // 114:1356
	0x05, 0x56, 0x11, 0x06,  // 115:1366
	0x05, 0x67, 0x08, 0x03,  // 116:1383
	0x05, 0x6F, 0x11, 0x07,  // 117:1391
	0x05, 0x80, 0x11, 0x06,  // 118:1408
	0x05, 0x91, 0x19, 0x09,  // 119:1425
	0x05, 0xAA, 0x11, 0x06,  // 120:1450
	0x05, 0xBB, 0x11, 0x06,  // 121:1467
	0x05, 0xCC, 0x11, 0x06,  // 122:1484
	0x05, 0xDD, 0x09, 0x04,  // 123:1501
	0x05, 0xE6, 0x05, 0x03,  // 124:1510
	0x05, 0xEB, 0x0B, 0x04,  // 125:1515
	0x05, 0xF6, 0x11, 0x07,  // 126:1526
	0xFF, 0xFF, 0x00, 0x08,  // 127:65535
	0xFF, 0xFF, 0x00, 0x08,  // 128:65535
	0xFF, 0xFF, 0x00, 0x08,  // 129:65535
	0xFF, 0xFF, 0x00, 0x08,  // 130:65535
	0xFF, 0xFF, 0x00, 0x08,  // 131:65535
	0xFF, 0xFF, 0x00, 0x08,  // 132:65535
	0xFF, 0xFF, 0x00, 0x08,  // 133:65535
	0xFF, 0xFF, 0x00, 0x08,  // 134:65535
	0xFF, 0xFF, 0x00, 0x08,  // 135:65535
	0xFF, 0xFF, 0x00, 0x08,  // 136:65535
	0xFF, 0xFF, 0x00, 0x08,  // 137:65535
	0xFF, 0xFF, 0x00, 0x08,  // 138:65535
	0xFF, 0xFF, 0x00, 0x08,  // 139:65535
	0xFF, 0xFF, 0x00, 0x08,  // 140:65535
	0xFF, 0xFF, 0x00, 0x08,  // 141:65535
	0xFF, 0xFF, 0x00, 0x08,  // 142:65535
	0xFF, 0xFF, 0x00, 0x08,  // 143:65535
	0xFF, 0xFF, 0x00, 0x08,  // 144:65535
	0xFF, 0xFF, 0x00, 0x08,  // 145:65535
	0xFF, 0xFF, 0x00, 0x08,  // 146:65535
	0xFF, 0xFF, 0x00, 0x08,  // 147:65535
	0xFF, 0xFF, 0x00, 0x08,  // 148:65535
	0xFF, 0xFF, 0x00, 0x08,  // 149:65535
	0xFF, 0xFF, 0x00, 0x08,  // 150:65535
	0xFF, 0xFF, 0x00, 0x08,  // 151:65535
	0xFF, 0xFF, 0x00, 0x08,  // 152:65535
	0xFF, 0xFF, 0x00, 0x08,  // 153:65535
	0xFF, 0xFF, 0x00, 0x08,  // 154:65535
	0xFF, 0xFF, 0x00, 0x08,  // 155:65535
	0xFF, 0xFF, 0x00, 0x08,  // 156:65535
	0xFF, 0xFF, 0x00, 0x08,  // 157:65535
	0xFF, 0xFF, 0x00, 0x08,  // 158:65535
	0xFF, 0xFF, 0x00, 0x08,  // 159:65535
	0xFF, 0xFF, 0x00, 0x03,  // 160:65535
	0x06, 0x07, 0x06, 0x04,  // 161:1543
	0x06, 0x0D, 0x14, 0x07,  // 162:1549
	0x06, 0x21, 0x11, 0x07,  // 163:1569
	0x06, 0x32, 0x11, 0x07,  // 164:1586
	0x06, 0x43, 0x11, 0x07,  // 165:1603
	0x06, 0x54, 0x05, 0x03,  // 166:1620
	0x06, 0x59, 0x11, 0x07,  // 167:1625
	0x06, 0x6A, 0x0A, 0x04,  // 168:1642
	0x06, 0x74, 0x1A, 0x09,  // 169:1652
	0x06, 0x8E, 0x0B, 0x05,  // 170:1678
	0x06, 0x99, 0x11, 0x07,  // 171:1689
	0x06, 0xAA, 0x14, 0x07,  // 172:1706
	0x06, 0xBE, 0x0B, 0x04,  // 173:1726
	0x06, 0xC9, 0x1A, 0x09,  // 174:1737
	0x06, 0xE3, 0x0A, 0x04,  // 175:1763
	0x06, 0xED, 0x0A, 0x05,  // 176:1773
	0x06, 0xF7, 0x14, 0x07,  // 177:1783
	0x07, 0x0B, 0x0B, 0x04,  // 178:1803
	0x07, 0x16, 0x0B, 0x04,  // 179:1814
	0x07, 0x21, 0x0A, 0x04,  // 180:1825
	0x07, 0x2B, 0x11, 0x07,  // 181:1835
	0x07, 0x3C, 0x12, 0x07,  // 182:1852
	0x07, 0x4E, 0x05, 0x03,  // 183:1870
	0x07, 0x53, 0x09, 0x04,  // 184:1875
	0x07, 0x5C, 0x08, 0x04,  // 185:1884
	0x07, 0x64, 0x0B, 0x04,  // 186:1892
	0x07, 0x6F, 0x11, 0x07,  // 187:1903
	0x07, 0x80, 0x1D, 0x0A,  // 188:1920
	0x07, 0x9D, 0x1D, 0x0A,  // 189:1949
	0x07, 0xBA, 0x1D, 0x0A,  // 190:1978
	0x07, 0xD7, 0x12, 0x08,  // 191:2007
	0x07, 0xE9, 0x17, 0x08,  // 192:2025
	0x08, 0x00, 0x17, 0x08,  // 193:2048
	0x08, 0x17, 0x17, 0x08,  // 194:2071
	0x08, 0x2E, 0x17, 0x08,  // 195:2094
	0x08, 0x45, 0x14, 0x08,  // 196:2117
	0x08, 0x59, 0x17, 0x08,  // 197:2137
	0x08, 0x70, 0x23, 0x0C,  // 198:2160
	0x08, 0x93, 0x1A, 0x09,  // 199:2195
	0x08, 0xAD, 0x14, 0x08,  // 200:2221
	0x08, 0xC1, 0x14, 0x08,  // 201:2241
	0x08, 0xD5, 0x14, 0x08,  // 202:2261
	0x08, 0xE9, 0x14, 0x08,  // 203:2281
	0x08, 0xFD, 0x05, 0x03,  // 204:2301
	0x09, 0x02, 0x07, 0x03,  // 205:2306
	0x09, 0x09, 0x07, 0x03,  // 206:2313
	0x09, 0x10, 0x07, 0x03,  // 207:2320
	0x09, 0x17, 0x17, 0x09,  // 208:2327
	0x09, 0x2E, 0x17, 0x09,  // 209:2350
	0x09, 0x45, 0x1A, 0x0A,  // 210:2373
	0x09, 0x5F, 0x1A, 0x0A,  // 211:2399
	0x09, 0x79, 0x1A, 0x0A,  // 212:2425
	0x09, 0x93, 0x1A, 0x0A,  // 213:2451
	0x09, 0xAD, 0x1A, 0x0A,  // 214:2477
	0x09, 0xC7, 0x11, 0x07,  // 215:2503
	0x09, 0xD8, 0x1A, 0x0A,  // 216:2520
	0x09, 0xF2, 0x17, 0x09,  // 217:2546
	0x0A, 0x09, 0x17, 0x09,  // 218:2569
	0x0A, 0x20, 0x17, 0x09,  // 219:2592
	0x0A, 0x37, 0x17, 0x09,  // 220:2615
	0x0A, 0x4E, 0x16, 0x08,  // 221:2638
	0x0A, 0x64, 0x14, 0x08,  // 222:2660
	0x0A, 0x78, 0x14, 0x08,  // 223:2680
	0x0A, 0x8C, 0x14, 0x07,  // 224:2700
	0x0A, 0xA0, 0x14, 0x07,  // 225:2720
	0x0A, 0xB4, 0x14, 0x07,  // 226:2740
	0x0A, 0xC8, 0x14, 0x07,  // 227:2760
	0x0A, 0xDC, 0x14, 0x07,  // 228:2780
	0x0A, 0xF0, 0x14, 0x07,  // 229:2800
	0x0B, 0x04, 0x1D, 0x0B,  // 230:2820
	0x0B, 0x21, 0x11, 0x06,  // 231:2849
	0x0B, 0x32, 0x11, 0x07,  // 232:2866
	0x0B, 0x43, 0x11, 0x07,  // 233:2883
	0x0B, 0x54, 0x11, 0x07,  // 234:2900
	0x0B, 0x65, 0x14, 0x07,  // 235:2917
	0x0B, 0x79, 0x05, 0x03,  // 236:2937
	0x0B, 0x7E, 0x07, 0x03,  // 237:2942
	0x0B, 0x85, 0x07, 0x03,  // 238:2949
	0x0B, 0x8C, 0x07, 0x03,  // 239:2956
	0x0B, 0x93, 0x11, 0x07,  // 240:2963
	0x0B, 0xA4, 0x11, 0x07,  // 241:2980
	0x0B, 0xB5, 0x11, 0x07,  // 242:2997
	0x0B, 0xC6, 0x11, 0x07,  // 243:3014
	0x0B, 0xD7, 0x11, 0x07,  // 244:3031
	0x0B, 0xE8, 0x11, 0x07,  // 245:3048
	0x0B, 0xF9, 0x11, 0x07,  // 246:3065
	0x0C, 0x0A, 0x14, 0x07,  // 247:3082
	0x0C, 0x1E, 0x11, 0x08,  // 248:3102
	0x0C, 0x2F, 0x11, 0x07,  // 249:3119
	0x0C, 0x40, 0x11, 0x07,  // 250:3136
	0x0C, 0x51, 0x11, 0x07,  // 251:3153
	0x0C, 0x62, 0x11, 0x07,  // 252:3170
	0x0C, 0x73, 0x11, 0x06,  // 253:3187
	0x0C, 0x84, 0x11, 0x07,  // 254:3204
	0x0C, 0x95, 0x0E, 0x06,  // 255:3221

	// Font Data:
	0x00,0x00,0x00,0xF0,0x6F,	// 33
	0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0xF0,	// 34
	0x00,0x08,0x00,0x00,0x79,0x00,0xE0,0x0F,0x00,0x00,0x49,0x00,0xC0,0x3F,0x00,0x20,0x09,	// 35
	0x00,0x00,0x00,0xE0,0x31,0x00,0x30,0x42,0x00,0xF8,0xFF,0x00,0x30,0x46,0x00,0x60,0x3C,	// 36
	0xC0,0x01,0x00,0x20,0x02,0x00,0x20,0x42,0x00,0xC0,0x31,0x00,0x00,0x08,0x00,0x00,0x06,0x00,0x80,0x01,0x00,0x60,0x3C,0x00,0x00,0x42,0x00,0x00,0x42,0x00,0x00,0x3C,	// 37
	0x00,0x00,0x00,0x00,0x3C,0x00,0xE0,0x66,0x00,0x10,0x43,0x00,0x10,0x47,0x00,0xE0,0x38,0x00,0x00,0x3C,0x00,0x00,0x40,	// 38
	0x00,0x00,0x00,0xF0,	// 39
	0x00,0x00,0x00,0x80,0x7F,0x00,0x70,0x80,0x03,	// 40
	0x10,0x00,0x02,0x60,0x80,0x01,0x80,0x7F,	// 41
	0x00,0x00,0x00,0x40,0x01,0x00,0xF0,0x00,0x00,0x40,0x01,	// 42
	0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x7F,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,	// 43
	0x00,0x00,0x00,0x00,0xE0,0x01,	// 44
	0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,	// 45
	0x00,0x00,0x00,0x00,0x60,	// 46
	0x00,0x70,0x00,0x00,0x0F,0x00,0xF0,	// 47
	0x80,0x1F,0x00,0x60,0x60,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x60,0x60,0x00,0x80,0x1F,	// 48
	0x00,0x00,0x00,0x80,0x00,0x00,0xC0,0x00,0x00,0xE0,0x7F,	// 49
	0x00,0x61,0x00,0xC0,0x71,0x00,0x20,0x48,0x00,0x20,0x4C,0x00,0x20,0x46,0x00,0xC0,0x43,	// 50
	0x00,0x00,0x00,0xC0,0x30,0x00,0x20,0x40,0x00,0x20,0x42,0x00,0x20,0x62,0x00,0xC0,0x3D,	// 51
	0x00,0x0C,0x00,0x00,0x0E,0x00,0x80,0x09,0x00,0x40,0x08,0x00,0xE0,0x7F,0x00,0x00,0x08,	// 52
	0x00,0x10,0x00,0xE0,0x63,0x00,0x20,0x41,0x00,0x20,0x41,0x00,0x20,0x63,0x00,0x20,0x3E,	// 53
	0x00,0x00,0x00,0x80,0x1F,0x00,0x60,0x63,0x00,0x20,0x41,0x00,0x20,0x63,0x00,0x40,0x3E,	// 54
	0x20,0x00,0x00,0x20,0x00,0x00,0x20,0x78,0x00,0x20,0x0E,0x00,0xA0,0x01,0x00,0x60,	// 55
	0x00,0x00,0x00,0xC0,0x3D,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0xC0,0x3D,	// 56
	0x00,0x00,0x00,0xC0,0x33,0x00,0x20,0x44,0x00,0x20,0x44,0x00,0x20,0x64,0x00,0xC0,0x1F,	// 57
	0x00,0x00,0x00,0x00,0x61,	// 58
	0x00,0x00,0x00,0x00,0xE1,0x01,	// 59
	0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x14,0x00,0x00,0x12,0x00,0x00,0x22,0x00,0x00,0x21,0x00,0x00,0x41,	// 60
	0x00,0x12,0x00,0x00,0x12,0x00,0x00,0x12,0x00,0x00,0x12,0x00,0x00,0x12,0x00,0x00,0x12,0x00,0x00,0x12,	// 61
	0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x22,0x00,0x00,0x12,0x00,0x00,0x14,0x00,0x00,0x0C,0x00,0x00,0x08,	// 62
	0x00,0x00,0x00,0x60,0x00,0x00,0x30,0x00,0x00,0x10,0x6E,0x00,0x10,0x03,0x00,0xE0,	// 63
	0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x0F,0x00,0x60,0x30,0x00,0x20,0x2F,0x00,0xD0,0x50,0x00,0x50,0x50,0x00,0xD0,0x5E,0x00,0xF0,0x51,0x00,0x60,0x28,0x00,0xC0,0x07,	// 64
	0x00,0x40,0x00,0x00,0x78,0x00,0x80,0x0F,0x00,0xF0,0x08,0x00,0x70,0x08,0x00,0xC0,0x0F,0x00,0x00,0x3C,0x00,0x00,0x60,	// 65
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x30,0x63,0x00,0xE0,0x3D,	// 66
	0x00,0x00,0x00,0x80,0x0F,0x00,0x60,0x30,0x00,0x10,0x40,0x00,0x10,0x40,0x00,0x10,0x40,0x00,0x30,0x60,0x00,0x60,0x38,	// 67
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x10,0x40,0x00,0x10,0x40,0x00,0x10,0x40,0x00,0x10,0x40,0x00,0x60,0x30,0x00,0xC0,0x0F,	// 68
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x10,0x42,	// 69
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x10,0x02,0x00,0x10,0x02,0x00,0x10,0x02,0x00,0x10,0x02,0x00,0x10,	// 70
	0x00,0x00,0x00,0x80,0x0F,0x00,0x60,0x30,0x00,0x10,0x40,0x00,0x10,0x40,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x60,0x32,0x00,0x40,0x7E,	// 71
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0xF0,0x7F,	// 72
	0x00,0x00,0x00,0xF0,0x7F,	// 73
	0x00,0x38,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0xF0,0x3F,	// 74
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x00,0x06,0x00,0x80,0x03,0x00,0xC0,0x06,0x00,0x60,0x18,0x00,0x30,0x70,0x00,0x10,0x40,	// 75
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,	// 76
	0x00,0x00,0x00,0xF0,0x7F,0x00,0xF0,0x00,0x00,0x00,0x07,0x00,0x00,0x78,0x00,0x00,0x78,0x00,0x00,0x07,0x00,0xF0,0x00,0x00,0xF0,0x7F,	// 77
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x70,0x00,0x00,0xC0,0x01,0x00,0x00,0x07,0x00,0x00,0x1C,0x00,0x00,0x30,0x00,0xF0,0x7F,	// 78
	0x00,0x00,0x00,0x80,0x0F,0x00,0x60,0x30,0x00,0x30,0x60,0x00,0x10,0x40,0x00,0x10,0x40,0x00,0x30,0x60,0x00,0x60,0x30,0x00,0x80,0x0F,	// 79
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x10,0x02,0x00,0x10,0x02,0x00,0x10,0x02,0x00,0x10,0x02,0x00,0xE0,0x01,	// 80
	0x00,0x00,0x00,0x80,0x0F,0x00,0x60,0x30,0x00,0x30,0x60,0x00,0x10,0x40,0x00,0x10,0x40,0x00,0x30,0x70,0x00,0x60,0x70,0x00,0x80,0xDF,	// 81
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x10,0x02,0x00,0x10,0x02,0x00,0x10,0x02,0x00,0x10,0x02,0x00,0x10,0x02,0x00,0xE0,0x7D,	// 82
	0x00,0x00,0x00,0xE0,0x39,0x00,0x30,0x63,0x00,0x10,0x43,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x30,0x66,0x00,0x60,0x3C,	// 83
	0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0xF0,0x7F,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,	// 84
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x00,0x20,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0xF0,0x1F,	// 85
	0x10,0x00,0x00,0xF0,0x00,0x00,0x80,0x0F,0x00,0x00,0x78,0x00,0x00,0x70,0x00,0x00,0x0F,0x00,0xF0,0x01,0x00,0x30,	// 86
	0x10,0x00,0x00,0xF0,0x03,0x00,0x00,0x7E,0x00,0x00,0x78,0x00,0x80,0x0F,0x00,0x70,0x00,0x00,0xF0,0x01,0x00,0x00,0x3E,0x00,0x00,0x60,0x00,0x80,0x1F,0x00,0xF0,	// 87
	0x00,0x00,0x00,0x30,0x60,0x00,0xE0,0x18,0x00,0x80,0x0F,0x00,0x00,0x07,0x00,0xC0,0x1C,0x00,0x30,0x70,0x00,0x10,0x40,	// 88
	0x00,0x00,0x00,0x30,0x00,0x00,0xE0,0x00,0x00,0x80,0x03,0x00,0x00,0x7E,0x00,0x80,0x03,0x00,0xE0,0x00,0x00,0x30,	// 89
	0x00,0x40,0x00,0x10,0x70,0x00,0x10,0x5C,0x00,0x10,0x46,0x00,0x90,0x43,0x00,0xF0,0x40,0x00,0x30,0x40,	// 90
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,	// 91
	0x70,0x00,0x00,0x80,0x07,0x00,0x00,0x78,	// 92
	0x00,0x00,0x00,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 93
	0x00,0x06,0x00,0x80,0x01,0x00,0x60,0x00,0x00,0xE0,0x00,0x00,0x00,0x03,0x00,0x00,0x04,	// 94
	0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,	// 95
	0x00,0x00,0x00,0x30,	// 96
	0x00,0x3B,0x00,0x80,0x49,0x00,0x80,0x44,0x00,0x80,0x44,0x00,0x80,0x24,0x00,0x00,0x7F,0x00,0x00,0x40,	// 97
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x80,0x61,0x00,0x80,0x40,0x00,0x80,0x61,0x00,0x00,0x3F,	// 98
	0x00,0x3E,0x00,0x80,0x61,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x00,0x33,	// 99
	0x00,0x1E,0x00,0x80,0x61,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x00,0x21,0x00,0xF0,0x7F,	// 100
	0x00,0x00,0x00,0x00,0x3F,0x00,0x80,0x44,0x00,0x80,0x44,0x00,0x80,0x44,0x00,0x00,0x37,	// 101
	0x80,0x00,0x00,0xF0,0x7F,0x00,0x90,	// 102
	0x00,0x00,0x00,0x00,0x3F,0x01,0x80,0x61,0x02,0x80,0x40,0x02,0x80,0x61,0x02,0x80,0xFF,0x01,	// 103
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x00,0x01,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0x00,0x7F,	// 104
	0x00,0x00,0x00,0xB0,0x7F,	// 105
	0x00,0x00,0x02,0xB0,0xFF,0x03,	// 106
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x00,0x04,0x00,0x00,0x0E,0x00,0x00,0x31,0x00,0x80,0x40,	// 107
	0x00,0x00,0x00,0xF0,0x7F,	// 108
	0x00,0x00,0x00,0x80,0x7F,0x00,0x00,0x01,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0x00,0x7F,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0x00,0x7F,	// 109
	0x00,0x00,0x00,0x80,0x7F,0x00,0x00,0x01,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0x00,0x7F,	// 110
	0x00,0x1E,0x00,0x80,0x61,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x80,0x61,0x00,0x00,0x1E,	// 111
	0x00,0x00,0x00,0x80,0xFF,0x03,0x80,0x61,0x00,0x80,0x40,0x00,0x80,0x61,0x00,0x00,0x3F,	// 112
	0x00,0x1E,0x00,0x80,0x61,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x00,0x61,0x00,0x80,0xFF,0x03,	// 113
	0x00,0x00,0x00,0x80,0x7F,0x00,0x00,0x01,0x00,0x80,	// 114
	0x00,0x00,0x00,0x00,0x37,0x00,0x80,0x44,0x00,0x80,0x4C,0x00,0x80,0x48,0x00,0x00,0x39,	// 115
	0x80,0x00,0x00,0xE0,0x7F,0x00,0x80,0x40,	// 116
	0x00,0x00,0x00,0x80,0x3F,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0x80,0x7F,	// 117
	0x80,0x00,0x00,0x00,0x0F,0x00,0x00,0x78,0x00,0x00,0x70,0x00,0x00,0x0F,0x00,0x80,0x01,	// 118
	0x80,0x00,0x00,0x00,0x1F,0x00,0x00,0x60,0x00,0x00,0x1E,0x00,0x80,0x01,0x00,0x00,0x3E,0x00,0x00,0x70,0x00,0x00,0x0F,0x00,0x80,	// 119
	0x00,0x40,0x00,0x80,0x61,0x00,0x00,0x1E,0x00,0x00,0x1E,0x00,0x80,0x73,0x00,0x80,0x40,	// 120
	0x80,0x00,0x00,0x00,0x0F,0x02,0x00,0xF8,0x03,0x00,0x70,0x00,0x00,0x0F,0x00,0x80,0x01,	// 121
	0x00,0x40,0x00,0x80,0x70,0x00,0x80,0x58,0x00,0x80,0x46,0x00,0x80,0x43,0x00,0x80,0x40,	// 122
	0x00,0x0C,0x00,0xF0,0xF3,0x03,0x10,0x00,0x02,	// 123
	0x00,0x00,0x00,0xF0,0x7F,	// 124
	0x00,0x00,0x00,0x10,0x00,0x02,0xF0,0xF3,0x03,0x00,0x0C,	// 125
	0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x08,0x00,0x00,0x08,	// 126
	0x00,0x00,0x00,0x80,0xFD,0x03,	// 161
	0x00,0x00,0x00,0x00,0x3E,0x00,0x80,0xE1,0x00,0x80,0x5E,0x00,0xC0,0x41,0x00,0x80,0x21,0x00,0x00,0x12,	// 162
	0x00,0x00,0x00,0xE0,0x63,0x00,0x30,0x3E,0x00,0x10,0x22,0x00,0x10,0x42,0x00,0x60,0x60,	// 163
	0x40,0x17,0x00,0x80,0x08,0x00,0x40,0x10,0x00,0x40,0x10,0x00,0x80,0x08,0x00,0x40,0x17,	// 164
	0x00,0x00,0x00,0x60,0x0A,0x00,0x80,0x0B,0x00,0x00,0x7E,0x00,0x80,0x0B,0x00,0x60,0x0A,	// 165
	0x00,0x00,0x00,0xF0,0x78,	// 166
	0x00,0x0E,0x00,0xE0,0x99,0x01,0x90,0x31,0x02,0x10,0x63,0x02,0x60,0xE2,0x01,0x00,0x1C,	// 167
	0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x60,	// 168
	0x80,0x0F,0x00,0x60,0x30,0x00,0xA0,0x2F,0x00,0xD0,0x58,0x00,0x50,0x50,0x00,0x50,0x50,0x00,0xA0,0x28,0x00,0x60,0x30,0x00,0x80,0x0F,	// 169
	0xB0,0x05,0x00,0x50,0x05,0x00,0x50,0x05,0x00,0xF0,0x05,	// 170
	0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x1A,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x13,	// 171
	0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x1E,	// 172
	0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,	// 173
	0x80,0x0F,0x00,0x40,0x30,0x00,0x20,0x20,0x00,0xD0,0x5F,0x00,0x50,0x42,0x00,0x50,0x4E,0x00,0xF0,0x31,0x00,0x60,0x30,0x00,0x80,0x0F,	// 174
	0x20,0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00,0x20,	// 175
	0xC0,0x00,0x00,0x20,0x01,0x00,0x20,0x01,0x00,0xC0,	// 176
	0x00,0x44,0x00,0x00,0x44,0x00,0x00,0x44,0x00,0x80,0x5F,0x00,0x00,0x44,0x00,0x00,0x44,0x00,0x00,0x44,	// 177
	0x60,0x06,0x00,0x10,0x05,0x00,0x90,0x04,0x00,0xE0,0x04,	// 178
	0x20,0x02,0x00,0x10,0x04,0x00,0x90,0x04,0x00,0x60,0x03,	// 179
	0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x10,	// 180
	0x00,0x00,0x00,0x80,0xFF,0x03,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0x80,0x7F,	// 181
	0xC0,0x00,0x00,0xF0,0x01,0x00,0xF0,0x03,0x00,0xF0,0xFF,0x01,0x10,0x00,0x00,0xF0,0xFF,0x01,	// 182
	0x00,0x00,0x00,0x00,0x0C,	// 183
	0x00,0x00,0x04,0x00,0x80,0x05,0x00,0x00,0x07,	// 184
	0x00,0x00,0x00,0x40,0x00,0x00,0xE0,0x07,	// 185
	0xE0,0x04,0x00,0x10,0x05,0x00,0x10,0x05,0x00,0xE0,0x04,	// 186
	0x00,0x00,0x00,0x00,0x12,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x1A,0x00,0x00,0x0C,	// 187
	0x00,0x00,0x00,0x40,0x00,0x00,0xE0,0x67,0x00,0x00,0x18,0x00,0x00,0x04,0x00,0x00,0x33,0x00,0xC0,0x28,0x00,0x20,0x24,0x00,0x00,0x7E,0x00,0x00,0x20,	// 188
	0x00,0x00,0x00,0x40,0x00,0x00,0xE0,0x67,0x00,0x00,0x18,0x00,0x00,0x06,0x00,0x80,0x01,0x00,0x40,0x66,0x00,0x20,0x51,0x00,0x00,0x49,0x00,0x00,0x4E,	// 189
	0x00,0x00,0x00,0x20,0x02,0x00,0x10,0x04,0x00,0x90,0x44,0x00,0x60,0x3B,0x00,0x00,0x06,0x00,0xC0,0x39,0x00,0x30,0x24,0x00,0x00,0x7E,0x00,0x00,0x20,	// 190
	0x00,0x00,0x00,0x00,0xC0,0x01,0x00,0x30,0x02,0x80,0x1D,0x02,0x00,0x00,0x03,0x00,0x80,0x01,	// 191
	0x00,0x40,0x00,0x00,0x78,0x00,0x80,0x0F,0x00,0xF6,0x08,0x00,0x70,0x08,0x00,0xC0,0x0F,0x00,0x00,0x3C,0x00,0x00,0x60,	// 192
	0x00,0x40,0x00,0x00,0x78,0x00,0x80,0x0F,0x00,0xF0,0x08,0x00,0x76,0x08,0x00,0xC0,0x0F,0x00,0x00,0x3C,0x00,0x00,0x60,	// 193
	0x00,0x40,0x00,0x00,0x78,0x00,0x80,0x0F,0x00,0xF6,0x08,0x00,0x72,0x08,0x00,0xC4,0x0F,0x00,0x00,0x3C,0x00,0x00,0x60,	// 194
	0x00,0x40,0x00,0x00,0x78,0x00,0x86,0x0F,0x00,0xF2,0x08,0x00,0x74,0x08,0x00,0xC6,0x0F,0x00,0x00,0x3C,0x00,0x00,0x60,	// 195
	0x00,0x60,0x00,0x00,0x1E,0x00,0xC4,0x0F,0x00,0x30,0x08,0x00,0xE4,0x0B,0x00,0x00,0x1E,0x00,0x00,0x70,	// 196
	0x00,0x60,0x00,0x00,0x3C,0x00,0x84,0x0F,0x00,0x7A,0x08,0x00,0xFE,0x08,0x00,0x80,0x0F,0x00,0x00,0x7C,0x00,0x00,0x40,	// 197
	0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x1E,0x00,0xC0,0x0B,0x00,0x30,0x08,0x00,0x10,0x08,0x00,0xF0,0x7F,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x10,0x40,	// 198
	0x00,0x00,0x00,0x80,0x1F,0x00,0x60,0x30,0x00,0x10,0x60,0x04,0x10,0xC0,0x05,0x10,0x40,0x07,0x10,0x60,0x00,0x60,0x38,0x00,0x40,0x08,	// 199
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x12,0x42,0x00,0x16,0x42,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x10,0x42,	// 200
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x12,0x42,0x00,0x10,0x42,0x00,0x10,0x42,	// 201
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x14,0x42,0x00,0x12,0x42,0x00,0x16,0x42,0x00,0x10,0x42,0x00,0x10,0x42,	// 202
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x14,0x42,0x00,0x10,0x42,0x00,0x14,0x42,0x00,0x10,0x42,0x00,0x10,0x42,	// 203
	0x02,0x00,0x00,0xF4,0x7F,	// 204
	0x00,0x00,0x00,0xF4,0x7F,0x00,0x02,	// 205
	0x04,0x00,0x00,0xF2,0x7F,0x00,0x04,	// 206
	0x04,0x00,0x00,0xF0,0x7F,0x00,0x04,	// 207
	0x00,0x02,0x00,0xF0,0x7F,0x00,0x10,0x42,0x00,0x10,0x42,0x00,0x10,0x40,0x00,0x10,0x40,0x00,0x60,0x30,0x00,0xC0,0x0F,	// 208
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x74,0x00,0x00,0xC2,0x01,0x00,0x02,0x07,0x00,0x04,0x1C,0x00,0x02,0x30,0x00,0xF0,0x7F,	// 209
	0x00,0x00,0x00,0x80,0x0F,0x00,0x60,0x30,0x00,0x32,0x60,0x00,0x16,0x40,0x00,0x10,0x40,0x00,0x30,0x60,0x00,0x60,0x30,0x00,0x80,0x0F,	// 210
	0x00,0x00,0x00,0x80,0x0F,0x00,0x60,0x30,0x00,0x30,0x60,0x00,0x10,0x40,0x00,0x16,0x40,0x00,0x32,0x60,0x00,0x60,0x30,0x00,0x80,0x0F,	// 211
	0x00,0x00,0x00,0x80,0x0F,0x00,0x60,0x30,0x00,0x30,0x60,0x00,0x16,0x40,0x00,0x16,0x40,0x00,0x30,0x60,0x00,0x60,0x30,0x00,0x80,0x0F,	// 212
	0x00,0x00,0x00,0x80,0x0F,0x00,0x60,0x30,0x00,0x36,0x60,0x00,0x12,0x40,0x00,0x14,0x40,0x00,0x36,0x60,0x00,0x60,0x30,0x00,0x80,0x0F,	// 213
	0x00,0x00,0x00,0x80,0x0F,0x00,0x60,0x30,0x00,0x34,0x60,0x00,0x14,0x40,0x00,0x14,0x40,0x00,0x34,0x60,0x00,0x60,0x30,0x00,0x80,0x0F,	// 214
	0x00,0x00,0x00,0x00,0x61,0x00,0x00,0x16,0x00,0x00,0x0C,0x00,0x00,0x16,0x00,0x00,0x63,	// 215
	0x00,0x00,0x00,0x80,0x5F,0x00,0x60,0x30,0x00,0x30,0x48,0x00,0x10,0x44,0x00,0x10,0x42,0x00,0x90,0x41,0x00,0xE0,0x30,0x00,0x90,0x0F,	// 216
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x00,0x20,0x00,0x02,0x40,0x00,0x04,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0xF0,0x1F,	// 217
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x00,0x20,0x00,0x00,0x40,0x00,0x04,0x40,0x00,0x02,0x40,0x00,0x00,0x20,0x00,0xF0,0x1F,	// 218
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x00,0x20,0x00,0x06,0x40,0x00,0x02,0x40,0x00,0x06,0x40,0x00,0x00,0x20,0x00,0xF0,0x1F,	// 219
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x00,0x20,0x00,0x04,0x40,0x00,0x00,0x40,0x00,0x04,0x40,0x00,0x00,0x20,0x00,0xF0,0x1F,	// 220
	0x00,0x00,0x00,0x30,0x00,0x00,0xE0,0x00,0x00,0x80,0x03,0x00,0x04,0x7E,0x00,0x82,0x03,0x00,0xE0,0x00,0x00,0x30,	// 221
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x40,0x08,0x00,0x40,0x08,0x00,0x40,0x08,0x00,0x40,0x08,0x00,0x80,0x07,	// 222
	0x00,0x00,0x00,0xE0,0x7F,0x00,0x30,0x00,0x00,0x10,0x00,0x00,0x10,0x42,0x00,0x30,0x63,0x00,0xE0,0x3D,	// 223
	0x00,0x3B,0x00,0x90,0x49,0x00,0xB0,0x44,0x00,0xA0,0x44,0x00,0x80,0x24,0x00,0x00,0x7F,0x00,0x00,0x40,	// 224
	0x00,0x3B,0x00,0x80,0x49,0x00,0x80,0x44,0x00,0xA0,0x44,0x00,0x90,0x24,0x00,0x00,0x7F,0x00,0x00,0x40,	// 225
	0x00,0x3B,0x00,0x80,0x49,0x00,0xB0,0x44,0x00,0x90,0x44,0x00,0xA0,0x24,0x00,0x00,0x7F,0x00,0x00,0x40,	// 226
	0x20,0x3B,0x00,0x90,0x49,0x00,0x90,0x44,0x00,0xA0,0x44,0x00,0xA0,0x24,0x00,0x10,0x7F,0x00,0x00,0x40,	// 227
	0x00,0x3B,0x00,0xE0,0x49,0x00,0xE0,0x44,0x00,0x80,0x44,0x00,0xE0,0x24,0x00,0x00,0x7F,0x00,0x00,0x40,	// 228
	0x00,0x3B,0x00,0x80,0x49,0x00,0xF0,0x44,0x00,0xC8,0x44,0x00,0xB0,0x24,0x00,0x00,0x7F,0x00,0x00,0x40,	// 229
	0x00,0x39,0x00,0x80,0x44,0x00,0x80,0x44,0x00,0x80,0x64,0x00,0x00,0x1F,0x00,0x80,0x65,0x00,0x80,0x44,0x00,0x80,0x44,0x00,0x80,0x65,0x00,0x00,0x16,	// 230
	0x00,0x1E,0x00,0x80,0x61,0x04,0x80,0xC0,0x05,0x80,0x40,0x07,0x80,0x31,0x00,0x00,0x12,	// 231
	0x00,0x00,0x00,0x00,0x3F,0x00,0x90,0x44,0x00,0xA0,0x44,0x00,0x80,0x44,0x00,0x00,0x37,	// 232
	0x00,0x00,0x00,0x00,0x3F,0x00,0x80,0x44,0x00,0xA0,0x44,0x00,0x90,0x44,0x00,0x00,0x37,	// 233
	0x00,0x00,0x00,0x00,0x3F,0x00,0xA0,0x44,0x00,0x90,0x44,0x00,0xA0,0x44,0x00,0x00,0x37,	// 234
	0x00,0x00,0x00,0x00,0x3E,0x00,0xE0,0x65,0x00,0x80,0x44,0x00,0xE0,0x44,0x00,0x00,0x37,0x00,0x00,0x06,	// 235
	0x10,0x00,0x00,0xA0,0x7F,	// 236
	0x00,0x00,0x00,0xA0,0x7F,0x00,0x10,	// 237
	0x20,0x00,0x00,0x90,0x7F,0x00,0x20,	// 238
	0x60,0x00,0x00,0x80,0x7F,0x00,0x60,	// 239
	0x00,0x1E,0x00,0xD0,0x61,0x00,0xB0,0x40,0x00,0xA0,0x40,0x00,0xD0,0x61,0x00,0x00,0x1F,	// 240
	0x00,0x00,0x00,0xA0,0x7F,0x00,0x10,0x01,0x00,0xB0,0x00,0x00,0xB0,0x00,0x00,0x00,0x7F,	// 241
	0x00,0x1E,0x00,0x90,0x61,0x00,0xB0,0x40,0x00,0x80,0x40,0x00,0x80,0x61,0x00,0x00,0x1E,	// 242
	0x00,0x1E,0x00,0x80,0x61,0x00,0x80,0x40,0x00,0xB0,0x40,0x00,0x90,0x61,0x00,0x00,0x1E,	// 243
	0x00,0x1E,0x00,0x80,0x61,0x00,0xB0,0x40,0x00,0xB0,0x40,0x00,0xA0,0x61,0x00,0x00,0x1E,	// 244
	0x00,0x1E,0x00,0xB0,0x61,0x00,0x90,0x40,0x00,0xA0,0x40,0x00,0xB0,0x61,0x00,0x00,0x1E,	// 245
	0x00,0x1E,0x00,0xE0,0x61,0x00,0xE0,0x40,0x00,0xE0,0x40,0x00,0xE0,0x61,0x00,0x00,0x1E,	// 246
	0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x80,0x69,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,	// 247
	0x00,0x7E,0x00,0x80,0x71,0x00,0x80,0x48,0x00,0x80,0x44,0x00,0x80,0x23,0x00,0x80,0x1F,	// 248
	0x00,0x00,0x00,0x80,0x3F,0x00,0x10,0x40,0x00,0x20,0x40,0x00,0x00,0x20,0x00,0x80,0x7F,	// 249
	0x00,0x00,0x00,0x80,0x3F,0x00,0x00,0x40,0x00,0x20,0x40,0x00,0x10,0x20,0x00,0x80,0x7F,	// 250
	0x00,0x00,0x00,0x80,0x3F,0x00,0x20,0x40,0x00,0x10,0x40,0x00,0x20,0x20,0x00,0x80,0x7F,	// 251
	0x00,0x00,0x00,0x80,0x3F,0x00,0x60,0x40,0x00,0x00,0x40,0x00,0x60,0x20,0x00,0x80,0x7F,	// 252
	0x80,0x00,0x00,0x00,0x0F,0x02,0x00,0xF8,0x03,0x30,0x70,0x00,0x10,0x0F,0x00,0x80,0x01,	// 253
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x80,0x61,0x00,0x80,0x40,0x00,0x80,0x61,0x00,0x00,0x3F,	// 254
	0x80,0x01,0x02,0x60,0x1E,0x02,0x00,0xE0,0x01,0x60,0x3C,0x00,0x80,0x03	// 255
};
