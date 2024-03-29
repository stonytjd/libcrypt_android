/*
 * crypt(3) implementation for uClibc
 *
 * The uClibc Library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * The GNU C Library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the GNU C Library; if not, write to the Free
 * Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 * 02111-1307 USA.
 *
 */

#ifndef _CRYPT_H
#define _CRYPT_H	1

#include <features.h>


/* Encrypt characters from KEY using salt to perturb the encryption method.
 * If salt begins with "$1$", MD5 hashing is used instead of DES. 
extern char *crypt (const char *__key, const char *__salt); */
char *crypt(const char *key, const char *salt);

/* Setup DES tables according KEY.  
extern void setkey (const char *__key) __ */
//void setkey(const char *key);

/* Encrypt data in BLOCK in place if EDFLAG is zero; otherwise decrypt
   block in place.  
extern void encrypt (char *__block, int __edflag) __THROW __nonnull ((1)); */

//void encrypt(char *block, int flag);


#endif	/* crypt.h */
