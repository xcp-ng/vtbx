/*
 * Copyright (C) 2019  Vates SAS - ronan.abhamon@vates.fr
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef _XCP_NG_FILE_H_
#define _XCP_NG_FILE_H_

#include <stdio.h>

#include "xcp-ng/generic/global.h"

// =============================================================================

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

XcpError xcp_file_close (FILE *fp);

XCP_NO_DISCARD char *xcp_readlink (const char *pathname);

XCP_NO_DISCARD XcpError xcp_file_size (const char *filename);

#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif // _XCP_NG_FILE_H_ included
