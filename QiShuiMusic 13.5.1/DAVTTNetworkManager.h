@interface DAVTTNetworkManager : NSObject
+ (id)requestForBinaryWithResponse:params:method:needCommonParams:headerField:enableHttpCache:progress:callback:;
@end
