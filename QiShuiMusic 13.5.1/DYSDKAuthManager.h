@interface DYSDKAuthManager : NSObject
- (BOOL)authEntry:normalAuth:onekeyAuth:silentAuth:completion:;
- (void)onekeyAuthEnableUseSDK:;
- (void)onekeyAuthSkipAuthDialog:;
- (void)onekeyAuthUIContainerView:;
+ (id)shared;
@end
