/*
 * pkcs11.h: OpenSC project's PKCS#11 library header
 *
 * Copyright (C) 2002  Timo Ter�s <timo.teras@iki.fi>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef OPENSC_PKCS11_H
#define OPENSC_PKCS11_H

#ifndef _WINDOWS
#include <rsaref/unix.h>
#include <rsaref/pkcs11.h>
#else
#include "rsaref/win32.h"
#pragma pack(push, cryptoki, 1)
#include "rsaref/pkcs11.h"
#pragma pack(pop, cryptoki)
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct sc_pkcs11_module sc_pkcs11_module_t;

extern sc_pkcs11_module_t *C_LoadModule(const char *name,
				CK_FUNCTION_LIST_PTR_PTR);
extern CK_RV C_UnloadModule(sc_pkcs11_module_t *);

#ifdef __cplusplus
}
#endif

#endif
