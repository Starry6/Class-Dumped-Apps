@interface AWEUserLoginEmailAccountComponent : NSObject
@property (nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> viewModel;
@property (nonatomic) AWEUserLoginInputView emailView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupComponentView;
- (id)initWithLoginViewModel:;
- (id)emailView;
- (void)setEmailView:;
- (id)viewModel;
- (unsigned long long)componentType;
- (void)viewWillAppear;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (id)componentView;
@end
