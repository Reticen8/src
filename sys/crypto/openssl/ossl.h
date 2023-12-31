/*
 * Copyright (c) 2020 Netflix, Inc
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer,
 *    without modification.
 * 2. Redistributions in binary form must reproduce at minimum a disclaimer
 *    similar to the "NO WARRANTY" disclaimer below ("Disclaimer") and any
 *    redistribution must be conditioned upon including a substantially
 *    similar Disclaimer requirement for further binary redistribution.
 *
 * NO WARRANTY
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF NONINFRINGEMENT, MERCHANTIBILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
 * THE COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR SPECIAL, EXEMPLARY,
 * OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
 * IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGES.
 */

#ifndef __OSSL_H__
#define	__OSSL_H__

/* Compatibility shims. */
#define	OPENSSL_cleanse		explicit_bzero

struct cryptop;
struct crypto_session_params;

int	ossl_chacha20(struct cryptop *crp,
	    const struct crypto_session_params *csp);
int	ossl_chacha20_poly1305_decrypt(struct cryptop *crp,
	    const struct crypto_session_params *csp);
int	ossl_chacha20_poly1305_encrypt(struct cryptop *crp,
	    const struct crypto_session_params *csp);
void ossl_cpuid(void);

/* Needs to be big enough to hold any hash context. */
struct ossl_hash_context {
	uint32_t	dummy[61];
} __aligned(32);

extern struct auth_hash ossl_hash_poly1305;
extern struct auth_hash ossl_hash_sha1;
extern struct auth_hash ossl_hash_sha224;
extern struct auth_hash ossl_hash_sha256;
extern struct auth_hash ossl_hash_sha384;
extern struct auth_hash ossl_hash_sha512;

#endif /* !__OSSL_H__ */
