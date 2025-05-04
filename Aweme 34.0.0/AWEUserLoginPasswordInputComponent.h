@interface AWEUserLoginPasswordInputComponent : NSObject
@property (nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> viewModel;
@property (nonatomic) AWEUserLoginInputView passwordView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearInputText;
- (void)setPasswordView:;
- (void)updateEyeViewContentSize:;
- (void)setupComponentView;
- (id)initWithLoginViewModel:;
- (id)viewModel;
- (unsigned long long)componentType;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)componentView;
- (id)passwordView;
@end
