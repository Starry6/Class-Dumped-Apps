@interface AWEVCDCloseInterConnectS2ViewController : UIViewController
@property (nonatomic) AWECloseInterConnectStepView stepView;
@property (nonatomic) UIView seperateLine;
@property (nonatomic) AWECloseInterConnectTextView textView;
@property (nonatomic) AWECloseInterConnectAvatarView avatarView;
@property (nonatomic) UIButton closeInterConnectButton;
@property (nonatomic) UIButton skipButton;
@property (nonatomic) AWEAuthorizeStateManager authorizeStateManager;
@property (nonatomic) AWEVCDAccountAlertModel model;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)closeAction:;
- (id)seperateLine;
- (void)setSeperateLine:;
- (void)setNavigationBar;
- (void)setAuthorizeStateManager:;
- (id)authorizeStateManager;
- (void)nextAction:;
- (id)stepView;
- (id)closeInterConnectButton;
- (void)setStepView:;
- (void)setCloseInterConnectButton:;
- (void)showHintAlert;
- (id)textView;
- (void)setModel:;
- (void)setTextView:;
- (void)setAvatarView:;
- (void)viewDidLoad;
- (id)avatarView;
- (id)model;
- (void).cxx_destruct;
- (void)setSkipButton:;
- (id)skipButton;
@end
