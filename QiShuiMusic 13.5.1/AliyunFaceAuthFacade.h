@interface AliyunFaceAuthFacade : NSObject
+ (void)initSDK;
+ (id)getMetaInfo;
+ (id)getNFCMetaInfo;
+ (id)getNFCVersion;
+ (void)initIPv6;
+ (void)nfcVerifyWith:extParams:onCompletion:;
+ (void)preload:completion:;
+ (void)setDataProtocolVersion;
+ (void)setupNetwork:timeoutForVerify:;
+ (void)verifyWith:extParams:onCompletion:;
+ (void)init;
+ (id)getVersion;
@end
