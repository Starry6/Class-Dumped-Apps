@interface AWEPOIDetailRequestConfiguration : NSObject
+ (id)requestHeaders:;
+ (id)sceneFromRouterParams;
+ (id)ditoParamsFromRouterParams;
+ (id)permissionFromRouterParams;
+ (id)bizParamsForPrefetch:;
+ (long long)tripHeadImageOptWithBizCode:;
+ (id)extensionParamsFromRouterParams:;
+ (id)getPreloadPOIEnterIDKey:;
+ (id)bizParamsForRequest:routerParams:;
+ (id)requestParamsFromRouterParams:;
+ (id)cityExtensionParamsFromRouterParams:;
+ (id)prefetchRequestPath;
+ (id)requestHeadersForPreload:prefetchModel:;
+ (id)networkParamsFromPreload:;
+ (id)getPreloadCacheKey:;
+ (id)scene;
+ (id)domain;
+ (id)requestPath;
@end
