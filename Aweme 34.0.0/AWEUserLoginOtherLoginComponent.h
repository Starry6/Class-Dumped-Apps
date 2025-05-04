@interface AWEUserLoginOtherLoginComponent : NSObject
@property (nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> viewModel;
@property (nonatomic) UIView otherLoginView;
@property (nonatomic) AWEUserLoginThirdLoginDataController thirdDataController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)onShowThirdPlatforms;
- (void)setupComponentView;
- (void)checkConfirmedProtocolWithCompletion:;
- (id)initWithLoginViewModel:;
- (void)setOtherLoginView:;
- (id)otherLoginView;
- (void)trackLoginGuideWithMethod:clickButton:;
- (id)thirdDataController;
- (void)setThirdDataController:;
- (void)loginViewTrackLoginEvent:;
- (void)thirdLoginViewRequestLoginWithPlatform:;
- (void)otherLoginViewOtherLoginAction;
- (id)viewModel;
- (unsigned long long)componentType;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)componentView;
@end
