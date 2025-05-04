@interface AWEPluginOpenPlatformOAuthImpl : NSObject
@property (nonatomic) @? callback;
@property (nonatomic) @? authCompleteBlk;
@property (nonatomic) @? authTimorCompletion;
@property (nonatomic) AWEMicroPlatformOAuthManager manager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)authorizeComplated:error:;
- (void)authorizeFetchAuthInfoFailWithError:;
- (void)authorizeFetchAuthInfoCompleted:;
- (void)setAuthCompleteBlk:;
- (void)setAuthTimorCompletion:;
- (id)authTimorCompletion;
- (id)authCompleteBlk;
- (void)bdp_getScopeInfoWithAuthModel:resultCallback:autoAuth:;
- (void)bdp_authorizeWithScopeString:completion:;
- (void)bdp_fetchAuthList:completion:;
- (void)bdp_changeSwitchStatus:completion:;
- (void)bdp_halfAuthorizeWithAuthModel:completion:;
- (void)setCallback:;
- (id)callback;
- (void)setManager:;
- (id)manager;
- (void).cxx_destruct;
+ (id)sharedPlugin;
@end
