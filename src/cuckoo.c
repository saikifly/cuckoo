#include "module.h"
#include "version.h"

#ifndef CK_STATIC

int RedisModule_OnLoad(RedisModuleCtx *ctx, RedisModuleString **argv, int argc) {

    if (RedisModule_Init(ctx, "cuckoo", CK_MODULE_VERSION, REDISMODULE_APIVER_1) ==
        REDISMODULE_ERR)
        return REDISMODULE_ERR;
    return CK_InitModuleInternal(ctx, argv, argc);
}

#endif