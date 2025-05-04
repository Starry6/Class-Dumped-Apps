@interface AWEPluginLoginCustomImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bdp_userIdWithAppID:;
- (void)bdp_loginWithParam:appID:completion:;
- (BOOL)bdp_isLoginWithAppID:;
- (id)bdp_sessionIdWithAppID:;
- (void)handleWithPhoneNumber:error:completion:;
- (void)handleWithToken:error:completion:;
- (id)bdp_secUserIdWithAppID:;
- (void)bdp_getPhoneNumberWithParam:completion:;
- (id)bdp_shortIdWithAppID:;
- (double)bdp_useDuration;
- (void)bdp_dealUserRelationWithParam:completion:;
- (void)bdp_getLocalPhoneNumberWithAppID:completion:;
- (void)bdp_getLocalPhoneNumberTokenWithAppID:completion:;
- (id)bdp_awemeUserNicknameWithAppID:;
- (id)bdp_getBindPhoneNumberWithAppID:;
- (void)bdp_getAvatarThumbWithAppID:completion:;
- (BOOL)bdp_getHomepageLeftBarStatus;
- (BOOL)bdp_isAppIDInFavoritesList:;
- (BOOL)bdp_enableTeenMode;
- (id)bdp_x_tt_token;
- (id)bdp_sdk_version;
+ (id)sharedPlugin;
+ (id)carrierStringForType:;
@end
