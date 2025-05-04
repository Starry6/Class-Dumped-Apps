@interface AWELastAccountLoginViewModel : NSObject
@property (nonatomic) NSString loginTitle;
@property (nonatomic) NSString loginButtonTitle;
@property (nonatomic) NSArray userModels;
@property (nonatomic) DYLastLoginUserModel userModel;
@property (nonatomic) q protocolOffset;
@property (nonatomic) BOOL isPushLogin;
@property (nonatomic) AWELoginButtonTagModel tagModel;
- (id)loginButtonTitle;
- (void)setLoginButtonTitle:;
- (void)setTagModel:;
- (id)tagModel;
- (void)setUserModels:;
- (id)userModels;
- (id)loginTitle;
- (long long)protocolOffset;
- (void)setLoginTitle:;
- (void)setProtocolOffset:;
- (BOOL)isPushLogin;
- (void)setIsPushLogin:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
@end
