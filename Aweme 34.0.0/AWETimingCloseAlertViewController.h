@interface AWETimingCloseAlertViewController : UIViewController
@property (nonatomic) UIView dismissView;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel mainLabel;
@property (nonatomic) UIButton leftButton;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) q autoCloseInterval;
@property (nonatomic) NSTimer autoCloseTimer;
@property (nonatomic) double originBrightness;
@property (nonatomic) BOOL brightnessDidChange;
@property (nonatomic) q screenOffInterval;
@property (nonatomic) NSTimer screenOffTimer;
@property (nonatomic) BOOL originDisableIdleTimer;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) q totalTime;
@property (nonatomic) Q timingCloseType;
@property (nonatomic) AWEAwemeModel fromModel;
@property (nonatomic) <AWETimingCloseAlertViewControllerDelegate> delegate;
- (void)setEnterFrom:;
- (id)fromModel;
- (void)setFromModel:;
- (id)enterFrom;
- (void)onAppWillResignActive;
- (void)setDidAppear:;
- (unsigned long long)timingCloseType;
- (void)setTimingCloseType:;
- (void)onAppDidBecomeActiveFromResign;
- (void)dismissViewDidClick;
- (void)setOriginDisableIdleTimer:;
- (long long)autoCloseInterval;
- (id)autoCloseTimer;
- (void)autoCloseDidFire;
- (void)setAutoCloseTimer:;
- (void)resumeBrightnessIfNeeded;
- (void)trackNoticeShow;
- (BOOL)originDisableIdleTimer;
- (void)resumeBrightnessIfNeeded:;
- (void)setAutoCloseInterval:;
- (void)setScreenOffInterval:;
- (void)trackNoticeClickWithPosition:content:;
- (void)trackConfirmTimingCloseTime;
- (id)screenOffTimer;
- (void)setScreenOffTimer:;
- (void)setOriginBrightness:;
- (void)setBrightnessDidChange:;
- (long long)screenOffInterval;
- (BOOL)brightnessDidChange;
- (double)originBrightness;
- (void)screenOffDidFire;
- (void)contentViewDidClick;
- (void)leftButtonDidClick;
- (void)rightButtonDidClick;
- (void)setLeftButton:;
- (void)viewWillDisappear:;
- (void)setRightButton:;
- (id)init;
- (id)delegate;
- (id)leftButton;
- (long long)totalTime;
- (void)viewDidLoad;
- (id)contentView;
- (id)rightButton;
- (void)viewDidDisappear:;
- (id)iconImageView;
- (void)viewWillAppear:;
- (BOOL)didAppear;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)viewDidAppear:;
- (void)setDelegate:;
- (void)setTotalTime:;
- (void)setIconImageView:;
- (void)setupUI;
- (void)setDismissView:;
- (id)dismissView;
- (id)mainLabel;
- (void)setMainLabel:;
- (void)hideContentView;
- (void)showContentView;
- (void)setData;
@end
