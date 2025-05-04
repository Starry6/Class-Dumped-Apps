@interface AWEOpenPlatformAuthRiskForbidViewController : UIViewController
@property (nonatomic) UIImageView forbidIcon;
@property (nonatomic) UILabel riskTitle;
@property (nonatomic) UILabel riskDesc;
@property (nonatomic) DUXButton knowButton;
@property (nonatomic) @? willCloseVCBlock;
- (id)knowButton;
- (void)setKnowButton:;
- (void)setupCustomNavigationBar;
- (id)forbidIcon;
- (id)riskTitle;
- (id)riskDesc;
- (void)leftCloseTapped;
- (id)willCloseVCBlock;
- (void)knowButtonTouch;
- (void)setWillCloseVCBlock:;
- (void)setForbidIcon:;
- (void)setRiskTitle:;
- (void)setRiskDesc:;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)setupUI;
@end
