@interface TTAccountMulticastDispatcher : NSObject
+ (void)dispatchAccountExpireAuthPlatform:error:bisectBlock:;
+ (void)dispatchAccountGetUserInfoWithBisectBlock:;
+ (void)dispatchAccountLoginAuthPlatform:error:bisectBlock:;
+ (void)dispatchAccountLoginSuccess:platform:reason:bisectBlock:;
+ (void)dispatchAccountLoginSuccess:platform:reason:bisectBlock:wait:;
+ (void)dispatchAccountLogoutAuthPlatform:error:bisectBlock:;
+ (void)dispatchAccountLogoutInScene:bisectBlock:;
+ (void)dispatchAccountProfileChanged:error:bisectBlock:;
+ (void)dispatchAccountSessionExpirationWithUser:error:bisectBlock:;
+ (void)dispatchAccountSessionExpired:bisectBlock:;
@end
