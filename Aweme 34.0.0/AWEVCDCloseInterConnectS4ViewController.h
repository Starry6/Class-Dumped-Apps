@interface AWEVCDCloseInterConnectS4ViewController : UIViewController
@property (nonatomic) AWECloseInterConnectS4View contentView;
@property (nonatomic) UIButton closeInterConnectButton;
@property (nonatomic) AWEAuthorizeStateManager authorizeStateManager;
@property (nonatomic) AWEVCDAccountAlertModel model;
- (void)setAuthorizeStateManager:;
- (id)authorizeStateManager;
- (void)nextAction:;
- (id)closeInterConnectButton;
- (void)setCloseInterConnectButton:;
- (void)setModel:;
- (void)viewDidLoad;
- (id)contentView;
- (id)model;
- (void).cxx_destruct;
- (void)setContentView:;
@end
