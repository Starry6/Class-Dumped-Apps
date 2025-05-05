@interface BDUGLuckyNetworkService : NSObject
@property (nonatomic) BOOL shouldBlockSummitRequest;
- (void)registerRequestSerializerBlock:;
- (void)requestPlainForJSONWithPath:params:method:headerField:callback:;
- (void)__requestForJSONWithPath:params:method:needCommonParams:retryTimes:headerField:requestSerializer:callback:;
- (void)__requestForJSONWithPath:params:method:needCommonParams:retryTimes:needRetryBlock:delayTs:headerField:requestSerializer:callback:;
- (id)defaultDomain;
- (void)registerResponseSerializerBlock:;
- (void)removeRequestSerializerBlock:;
- (void)removeResponseSerializerBlock:;
- (void)requestForJSONWithPath:params:method:headerField:callback:;
- (void)requestForJSONWithPath:params:method:needCommonParams:retryTimes:headerField:callback:;
- (void)requestForJSONWithPath:params:method:needCommonParams:retryTimes:needRetryBlock:delayTs:headerField:callback:;
- (void)requestPlainForJSONWithPath:params:method:needCommonParams:headerField:callback:;
- (void)setShouldBlockSummitRequest:;
- (BOOL)shouldBlockSummitRequest;
+ (void)__monitorWithService:category:response:;
+ (id)commonQueryParams;
+ (BOOL)enableAsyncTTNet;
+ (id)netWorkString;
+ (id)sharedInstance;
@end
