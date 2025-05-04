@interface AWEUserLoginProtocolComponent : NSObject
@property (nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> viewModel;
@property (nonatomic) AWEUserLoginProtocolView contentView;
@property (nonatomic) BOOL protocolClickEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupComponentView;
- (void)checkConfirmedProtocolWithCompletion:;
- (id)initWithLoginViewModel:;
- (void)startBinding;
- (BOOL)protocolClickEnabled;
- (void)setProtocolClickEnabled:;
- (id)viewModel;
- (id)contentView;
- (unsigned long long)componentType;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)viewDidAppear;
- (id)componentView;
- (void)viewDidDisappear;
@end
