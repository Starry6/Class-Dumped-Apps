@interface AWEModernElderModeSettingViewController : UIViewController
@property (nonatomic) NSString enterFrom;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIButton ensureButton;
@property (nonatomic) DUXButton delayEffectButton;
@property (nonatomic) NSString referString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setEnterFrom:;
- (BOOL)configWithRouterParamDict:;
- (id)enterFrom;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)__setupUI;
- (void)__trackEnterElderModeSetting;
- (id)delayEffectButton;
- (id)ensureButton;
- (void)__trackElderModeStatusButtonClick;
- (void)__ensureButtonClicked;
- (void)delayEffectButtonDidClick;
- (void)setEnsureButton:;
- (void)setDelayEffectButton:;
- (void)viewDidLoad;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setBgImageView:;
- (id)bgImageView;
@end
