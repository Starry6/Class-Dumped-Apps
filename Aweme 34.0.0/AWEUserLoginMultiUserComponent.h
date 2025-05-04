@interface AWEUserLoginMultiUserComponent : NSObject
@property (nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> viewModel;
@property (nonatomic) AWETrustAccountContainerView multiAccountView;
@property (nonatomic) Q selectedIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)stopLoadingWithError:;
- (void)setupComponentView;
- (id)initWithLoginViewModel:;
- (void)startBinding;
- (void)requestLoginWithIndex:;
- (id)multiAccountView;
- (void)setMultiAccountView:;
- (void)setSelectedIndex:;
- (void)startLoading;
- (id)viewModel;
- (unsigned long long)componentType;
- (unsigned long long)selectedIndex;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)componentView;
@end
