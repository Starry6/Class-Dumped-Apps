@interface AWEUserLoginThirdLoginDataController : AWEUserLoginBaseDataController
@property (nonatomic) AWEUITextLoadingView thirdLoginLoadingView;
- (id)thirdLoginLoadingView;
- (void)setThirdLoginLoadingView:;
- (id)aAWEUserModuleServiceDOUYINHTSAdapter;
- (void)requestLoginWithPlatform:pageName:;
- (void)trackLoginEvent:platform:error:;
- (void)handleSuccess:platform:ticket:;
- (void).cxx_destruct;
- (void)showError:;
+ (Class)aAWEUserModuleServiceDOUYINHTSAdapterClass;
@end
