/*-
 * SPDX-License-Identifier: ISC
 *
 * Copyright (c) 2010 Atheros Communications, Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef	__AR9287AN_H__
#define	__AR9287AN_H__

#define	AR9287_AN_RF2G3_CH0			0x7808
#define	AR9287_AN_RF2G3_CH1			0x785c
#define	AR9287_AN_RF2G3_DB1			0xE0000000
#define	AR9287_AN_RF2G3_DB1_S			29
#define	AR9287_AN_RF2G3_DB2			0x1C000000
#define	AR9287_AN_RF2G3_DB2_S			26
#define	AR9287_AN_RF2G3_OB_CCK			0x03800000
#define	AR9287_AN_RF2G3_OB_CCK_S		23
#define	AR9287_AN_RF2G3_OB_PSK			0x00700000
#define	AR9287_AN_RF2G3_OB_PSK_S		20
#define	AR9287_AN_RF2G3_OB_QAM			0x000E0000
#define	AR9287_AN_RF2G3_OB_QAM_S		17
#define	AR9287_AN_RF2G3_OB_PAL_OFF		0x0001C000
#define	AR9287_AN_RF2G3_OB_PAL_OFF_S		14

#define	AR9287_AN_TXPC0				0x7898
#define	AR9287_AN_TXPC0_TXPCMODE		0x0000C000
#define	AR9287_AN_TXPC0_TXPCMODE_S     		14
#define	AR9287_AN_TXPC0_TXPCMODE_NORMAL		0
#define	AR9287_AN_TXPC0_TXPCMODE_TEST		1
#define	AR9287_AN_TXPC0_TXPCMODE_TEMPSENSE	2
#define	AR9287_AN_TXPC0_TXPCMODE_ATBTEST	3

#define	AR9287_AN_TOP2				0x78b4
#define	AR9287_AN_TOP2_XPABIAS_LVL		0xC0000000
#define	AR9287_AN_TOP2_XPABIAS_LVL_S		30

#endif
