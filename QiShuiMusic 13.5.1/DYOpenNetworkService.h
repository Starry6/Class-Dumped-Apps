@interface DYOpenNetworkService : NSObject
+ (id)POST:bodyDict:contentType:extraReq:completion:;
+ (id)GET:paramsString:extraReq:completion:;
+ (id)appendCommonParamsStringFor:;
+ (void)dyopen_addLaneHeaderIfNeeded:;
+ (void)dyopen_addLaneHeaderIfNeeded:;
+ (void)handleBodyDict:forRequest:contentType:;
+ (id)networkDomain;
+ (void)setupBusiCommonQueryDict:;
+ (void)cancelTask:;
+ (id)session;
@end
