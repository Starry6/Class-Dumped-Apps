@interface AWEUserOauthServiceIMP : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isInAuthorizeLogin;
- (BOOL)isInRequireLogin;
- (void)startConfiguration;
- (id)currentConfiguredSchemes;
- (void)nativeOAuthWithParamsInterface:loginCompletion:;
- (void)nativeOAuthV2WithParamsInterface:loginCompletion:;
- (BOOL)handleOpenURL:;
@end
