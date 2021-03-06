/**
 * File: callbacks_con.h
 * Author: Joe Shang
 * Brief: The callback handlers of communication programs.
 */

#ifndef _CON_CALLBACKS_H_
#define _CON_CALLBACKS_H_

#include "typedef.h"

DECLS_BEGIN

void connector_open_callback(void *data, void *ctx);
void connector_close_callback(void *data, void *ctx);

DECLS_END

#endif
