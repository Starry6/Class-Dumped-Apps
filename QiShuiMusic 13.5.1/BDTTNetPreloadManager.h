@interface BDTTNetPreloadManager : NSObject
+ (void)requestForBinaryWithResponse:callback:;
+ (void)requestForBinaryWithResponse:params:method:needCommonParams:headerField:requestSerializer:responseSerializer:callback:;
+ (void)requestForBinaryWithResponse:params:method:needCommonParams:headerField:requestSerializer:responseSerializer:timeoutInterval:retryCount:callback:;
+ (void)requestForJSONWithResponse:callback:;
+ (void)requestForJSONWithResponse:params:method:needCommonParams:headerField:requestSerializer:responseSerializer:callback:;
+ (void)requestForJSONWithResponse:params:method:needCommonParams:headerField:requestSerializer:responseSerializer:timeoutInterval:retryCount:onlyWiFi:callback:;
@end
