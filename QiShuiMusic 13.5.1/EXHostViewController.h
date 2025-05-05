@interface EXHostViewController : UIViewController
@property (nonatomic) _EXHostSessionDriver sessionDriver;
@property (nonatomic) UIViewController embededViewController;
@property (nonatomic) _EXHostViewControllerConfiguration configuration;
@property (nonatomic) <EXHostViewControllerDelegate> delegate;
@property (nonatomic) UIView placeholderView;
@property (nonatomic) UIView view;
- (id)placeholderView;
- (id)init;
- (void)setPlaceholderView:;
- (void)setDelegate:;
- (id)makeXPCConnectionWithError:;
- (void)setConfiguration:;
- (id)configuration;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (void)loadView;
- (id)initWithConfiguration:;
- (void)viewDidLoad;
- (void)embedViewController:;
- (id)sessionDriver;
- (void)setSessionDriver:;
- (id)embededViewController;
- (void)setEmbededViewController:;
@end
