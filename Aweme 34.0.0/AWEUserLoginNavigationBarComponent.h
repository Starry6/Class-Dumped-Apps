@interface AWEUserLoginNavigationBarComponent : NSObject
@property (nonatomic) UIView navigationBar;
@property (nonatomic) AWEUserLoginBaseViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)skipAction;
- (void)helpAction;
- (id)initWithLoginViewModel:;
- (void)bindUI;
- (void)setupHalfScreenNavigationBar;
- (void)setupFullScreenNavigationBar;
- (id)navigationBar;
- (id)viewModel;
- (unsigned long long)componentType;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)closeAction;
- (void)backAction;
- (void)setNavigationBar:;
- (id)componentView;
- (void)setupNavigationBar;
@end
