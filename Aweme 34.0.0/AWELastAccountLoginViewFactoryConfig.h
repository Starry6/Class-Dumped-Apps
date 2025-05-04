@interface AWELastAccountLoginViewFactoryConfig : NSObject
@property (nonatomic) NSString loginTitle;
@property (nonatomic) NSString loginButtonTitle;
@property (nonatomic) AWEUserContext context;
@property (nonatomic) NSArray userModel;
@property (nonatomic) q protocolOffset;
@property (nonatomic) BOOL isPushLogin;
@property (nonatomic) AWELoginButtonTagModel tagModel;
- (id)loginButtonTitle;
- (void)setLoginButtonTitle:;
- (void)setTagModel:;
- (id)tagModel;
- (id)loginTitle;
- (long long)protocolOffset;
- (void)setLoginTitle:;
- (void)setProtocolOffset:;
- (BOOL)isPushLogin;
- (void)setIsPushLogin:;
- (void)setUserModel:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)userModel;
- (id)context;
@end
