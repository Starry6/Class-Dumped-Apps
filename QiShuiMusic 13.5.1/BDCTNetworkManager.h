@interface BDCTNetworkManager : NSObject
+ (id)sysInfo;
+ (id)bytedPrepareSession:params:binaryDatas:binaryNames:method:;
+ (id)bytedPrepareSession:params:binaryDatas:binaryNames:method:headerField:;
+ (void)handleHttpData:response:error:callback:;
+ (void)requestForResponseWithUrl:method:params:binaryNames:binaryDatas:completion:;
+ (void)requestForResponseWithUrl:method:params:binaryNames:binaryDatas:headerField:completion:;
+ (void)startRequest:callback:;
@end
