#include "module.h"
#include "redismodule.h"

int HelloWorldCommand(RedisModuleCtx *ctx, RedisModuleString **argv, int argc) {
    RedisModule_ReplyWithSimpleString(ctx, "hello world");
    return REDISMODULE_OK;
}

int CK_InitModuleInternal(RedisModuleCtx *ctx, RedisModuleString **argv, int argc) {
    if (RedisModule_Init(ctx,"ck",1,REDISMODULE_APIVER_1)
       == REDISMODULE_ERR) return REDISMODULE_ERR;

    if (RedisModule_CreateCommand(ctx, "ck.hello", HelloWorldCommand, "write fast",
                                  1, 1, 1) == REDISMODULE_ERR)
        return REDISMODULE_ERR;

    return REDISMODULE_OK;
}
