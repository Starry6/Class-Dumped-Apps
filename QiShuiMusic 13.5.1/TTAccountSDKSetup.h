@interface TTAccountSDKSetup : NSObject
+ (void)setupCarrierOneKeyLoginWithProtocol:;
+ (void)setupThirdPartyLoginWithProtocol:;
+ (void)startWithConfig:;
@end
