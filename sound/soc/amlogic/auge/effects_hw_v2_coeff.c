/*
 * sound/soc/amlogic/auge/effects_hw_v2_coeff.c
 *
 * Copyright (C) 2018 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 */

#define AED_EQ_LENGTH            225
#define AED_MULTIBAND_DRC_LENGTH 18
#define AED_FULLBAND_DRC_LENGTH  24

static int eq_coeff[] = {
	/* 0   */ 0x7fd51b,
	/* 1   */ 0x30055c9,
	/* 2   */ 0x7fd51b,
	/* 3   */ 0x30055e6,
	/* 4   */ 0x7faa53,
	/* 5   */ 0x7ed219,
	/* 6   */ 0x3025bce,
	/* 7   */ 0x7ed219,
	/* 8   */ 0x3025e96,
	/* 9   */ 0x7da6fb,
	/* 10  */ 0x7ed219,
	/* 11  */ 0x3025bce,
	/* 12  */ 0x7ed219,
	/* 13  */ 0x3025e96,
	/* 14  */ 0x7da6fb,
	/* 15  */ 0xdf71e0,
	/* 16  */ 0x2411c40,
	/* 17  */ 0xdf71e0,
	/* 18  */ 0x304bd12,
	/* 19  */ 0x7b58fb,
	/* 20  */ 0x7d8252,
	/* 21  */ 0x30bb7df,
	/* 22  */ 0x771ba1,
	/* 23  */ 0x30bb7df,
	/* 24  */ 0x749df4,
	/* 25  */ 0x79f87b,
	/* 26  */ 0x31971e4,
	/* 27  */ 0x6ddabe,
	/* 28  */ 0x31971e4,
	/* 29  */ 0x67d339,
	/* 30  */ 0x84f8f3,
	/* 31  */ 0x31d2c91,
	/* 32  */ 0x62ebbf,
	/* 33  */ 0x31d2c91,
	/* 34  */ 0x67e4b1,
	/* 35  */ 0x711f0e,
	/* 36  */ 0x3543f10,
	/* 37  */ 0x4ae2f0,
	/* 38  */ 0x3543f10,
	/* 39  */ 0x3c01ff,
	/* 40  */ 0xaaf457,
	/* 41  */ 0x3831bd5,
	/* 42  */ 0xfb150,
	/* 43  */ 0x3831bd5,
	/* 44  */ 0x3aa5a8,
	/* 45  */ 0x65b5d1,
	/* 46  */ 0xe3390,
	/* 47  */ 0x2226c8,
	/* 48  */ 0xe3390,
	/* 49  */ 0x7dc99,
	/* 50  */ 0x358660,
	/* 51  */ 0x6b0cc1,
	/* 52  */ 0x358660,
	/* 53  */ 0x3b418e,
	/* 54  */ 0x1ad7f4,
	/* 55  */ 0x800000,
	/* 56  */ 0x0,
	/* 57  */ 0x0,
	/* 58  */ 0x0,
	/* 59  */ 0x0,
	/* 60  */ 0x800000,
	/* 61  */ 0x0,
	/* 62  */ 0x0,
	/* 63  */ 0x0,
	/* 64  */ 0x0,
	/* 65  */ 0x800000,
	/* 66  */ 0x0,
	/* 67  */ 0x0,
	/* 68  */ 0x0,
	/* 69  */ 0x0,
	/* 70  */ 0x800000,
	/* 71  */ 0x0,
	/* 72  */ 0x0,
	/* 73  */ 0x0,
	/* 74  */ 0x0,
	/* 75  */ 0x800000,
	/* 76  */ 0x0,
	/* 77  */ 0x0,
	/* 78  */ 0x0,
	/* 79  */ 0x0,
	/* 80  */ 0x800000,
	/* 81  */ 0x0,
	/* 82  */ 0x0,
	/* 83  */ 0x0,
	/* 84  */ 0x0,
	/* 85  */ 0x800000,
	/* 86  */ 0x0,
	/* 87  */ 0x0,
	/* 88  */ 0x0,
	/* 89  */ 0x0,
	/* 90  */ 0x800000,
	/* 91  */ 0x0,
	/* 92  */ 0x0,
	/* 93  */ 0x0,
	/* 94  */ 0x0,
	/* 95  */ 0x800000,
	/* 96  */ 0x0,
	/* 97  */ 0x0,
	/* 98  */ 0x0,
	/* 99  */ 0x0,
	/* 100 */ 0x800000,
	/* 101 */ 0x0,
	/* 102 */ 0x0,
	/* 103 */ 0x0,
	/* 104 */ 0x0,
	/* 105 */ 0x7ed219,
	/* 106 */ 0x3025bce,
	/* 107 */ 0x7ed219,
	/* 108 */ 0x3025e96,
	/* 109 */ 0x7da6fb,
	/* 110 */ 0x7ed219,
	/* 111 */ 0x3025bce,
	/* 112 */ 0x7ed219,
	/* 113 */ 0x3025e96,
	/* 114 */ 0x7da6fb,
	/* 115 */ 0xdf71e0,
	/* 116 */ 0x2411c40,
	/* 117 */ 0xdf71e0,
	/* 118 */ 0x304bd12,
	/* 119 */ 0x7b58fb,
	/* 120 */ 0x7d8252,
	/* 121 */ 0x30bb7df,
	/* 122 */ 0x771ba1,
	/* 123 */ 0x30bb7df,
	/* 124 */ 0x749df4,
	/* 125 */ 0x79f87b,
	/* 126 */ 0x31971e4,
	/* 127 */ 0x6ddabe,
	/* 128 */ 0x31971e4,
	/* 129 */ 0x67d339,
	/* 130 */ 0x84f8f3,
	/* 131 */ 0x31d2c91,
	/* 132 */ 0x62ebbf,
	/* 133 */ 0x31d2c91,
	/* 134 */ 0x67e4b1,
	/* 135 */ 0x711f0e,
	/* 136 */ 0x3543f10,
	/* 137 */ 0x4ae2f0,
	/* 138 */ 0x3543f10,
	/* 139 */ 0x3c01ff,
	/* 140 */ 0xaaf457,
	/* 141 */ 0x3831bd5,
	/* 142 */ 0xfb150,
	/* 143 */ 0x3831bd5,
	/* 144 */ 0x3aa5a8,
	/* 145 */ 0x65b5d1,
	/* 146 */ 0xe3390,
	/* 147 */ 0x2226c8,
	/* 148 */ 0xe3390,
	/* 149 */ 0x7dc99,
	/* 150 */ 0x358660,
	/* 151 */ 0x6b0cc1,
	/* 152 */ 0x358660,
	/* 153 */ 0x3b418e,
	/* 154 */ 0x1ad7f4,
	/* 155 */ 0x800000,
	/* 156 */ 0x0,
	/* 157 */ 0x0,
	/* 158 */ 0x0,
	/* 159 */ 0x0,
	/* 160 */ 0x800000,
	/* 161 */ 0x0,
	/* 162 */ 0x0,
	/* 163 */ 0x0,
	/* 164 */ 0x0,
	/* 165 */ 0x800000,
	/* 166 */ 0x0,
	/* 167 */ 0x0,
	/* 168 */ 0x0,
	/* 169 */ 0x0,
	/* 170 */ 0x800000,
	/* 171 */ 0x0,
	/* 172 */ 0x0,
	/* 173 */ 0x0,
	/* 174 */ 0x0,
	/* 175 */ 0x800000,
	/* 176 */ 0x0,
	/* 177 */ 0x0,
	/* 178 */ 0x0,
	/* 179 */ 0x0,
	/* 180 */ 0x800000,
	/* 181 */ 0x0,
	/* 182 */ 0x0,
	/* 183 */ 0x0,
	/* 184 */ 0x0,
	/* 185 */ 0x800000,
	/* 186 */ 0x0,
	/* 187 */ 0x0,
	/* 188 */ 0x0,
	/* 189 */ 0x0,
	/* 190 */ 0x800000,
	/* 191 */ 0x0,
	/* 192 */ 0x0,
	/* 193 */ 0x0,
	/* 194 */ 0x0,
	/* 195 */ 0x800000,
	/* 196 */ 0x0,
	/* 197 */ 0x0,
	/* 198 */ 0x0,
	/* 199 */ 0x0,
	/* 200 */ 0x800000,
	/* 201 */ 0x0,
	/* 202 */ 0x0,
	/* 203 */ 0x0,
	/* 204 */ 0x0,
	/* 205 */ 0x25b,
	/* 206 */ 0x4b5,
	/* 207 */ 0x25b,
	/* 208 */ 0x3045701,
	/* 209 */ 0x7bb269,
	/* 210 */ 0x7dd6da,
	/* 211 */ 0x304524c,
	/* 212 */ 0x7dd6da,
	/* 213 */ 0x3045701,
	/* 214 */ 0x7bb269,
	/* 215 */ 0x7f3ee,
	/* 216 */ 0xfe7dc,
	/* 217 */ 0x7f3ee,
	/* 218 */ 0x37f9f4a,
	/* 219 */ 0x20306d,
	/* 220 */ 0x482449,
	/* 221 */ 0x36fb76e,
	/* 222 */ 0x482449,
	/* 223 */ 0x37f9f4a,
	/* 224 */ 0x20306d,
};

static int multiband_drc_coeff[] = {
	0x34ebb,   /* Low SMS coeff0 */
	0x7f54e0,  /* Low SMS coeff1 */
	0x5188,    /* Low RELEASE coeff0 */
	0x7fae78,  /* Low RELEASE coeff1 */
	0x3263a,   /* Low ATTACK coeff0 */
	0x7cd9c6,  /* Low ATTACK coeff1 */

	0x34ebb,   /* Mid */
	0x7f54e0,
	0x5188,
	0x7fae78,
	0x3263a,
	0x7cd9c6,

	0x34ebb,   /* High */
	0x7f54e0,
	0x5188,
	0x7fae78,
	0x3263a,
	0x7cd9c6,
};

static int fullband_drc_coeff[] = {
	0x5188,	    /* RELEASE_COEF00 */
	0x7fae78,	/* RELEASE_COEF01 */
	0x5188,
	0x7fae78,
	0x5188,
	0x7fae78,
	0x5188,
	0x7fae78,
	0x5188,
	0x7fae78,
	0x5188,	    /* RELEASE_COEF50 */
	0x7fae78,	/* RELEASE_COEF51 */
	0x3263a,	/* ATTACK_COEF00 */
	0x7cd9c6,	/* ATTACK_COEF01 */
	0x3263a,
	0x7cd9c6,
	0x3263a,
	0x7cd9c6,
	0x3263a,
	0x7cd9c6,
	0x3263a,
	0x7cd9c6,
	0x3263a,	/* ATTACK_COEF50 */
	0x7cd9c6,	/* ATTACK_COEF51 */
};
