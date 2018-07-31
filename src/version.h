
#ifndef CK_MODULE_VERSION

#define CK_VERSION_MAJOR 1
#define CK_VERSION_MINOR 2
#define CK_VERSION_PATCH 0

#define CK_MODULE_VERSION \
  (CK_VERSION_MAJOR * 10000 + CK_VERSION_MINOR * 100 + CK_VERSION_PATCH)

#ifdef CK_GIT_VERSION
static inline const char* CK_GetExtraVersion() {
  return CK_GIT_VERSION;
}
#else
static inline const char* CK_GetExtraVersion() {
    return "";
}
#endif

#endif
