@interface AWERadarGameBEFViewController : UIViewController
@property (nonatomic) IESEffectModel gameEffectModel;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) BEFView befView;
@property (nonatomic) UIView loadingView;
@property (nonatomic) UIImageView blurIconImageView;
@property (nonatomic) UIView iconView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView loadingBaseView;
@property (nonatomic) UIView loadingProgressView;
@property (nonatomic) UILabel loadingLabel;
@property (nonatomic) UIButton backButton;
@property (nonatomic) UIButton settingButton;
@property (nonatomic) UIView<AWEPublishProgressViewProtocol> progressView;
@property (nonatomic) BOOL previousKeepAlive;
@property (nonatomic) NSDate startTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)createLoadingView;
- (BOOL)msgProc:arg1:arg2:arg3:;
- (void)setPreviousKeepAlive:;
- (BOOL)previousKeepAlive;
- (void)setSettingButton:;
- (id)settingButton;
- (void)settingAction;
- (void)setupProgressView;
- (void)setGameEffectModel:;
- (void)loadGameEffectModel;
- (void)pauseEffect;
- (void)createBEFView;
- (id)befView;
- (id)generateInitParam;
- (void)setBefView:;
- (id)blurIconImageView;
- (id)loadingBaseView;
- (id)gameEffectModel;
- (void)updateNavButtonStatus:;
- (id)initWithGameEffectModel:;
- (void)setBlurIconImageView:;
- (void)setLoadingBaseView:;
- (id)backButton;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)setStartTime:;
- (id)progressView;
- (void)setIsPaused:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (void)setBackButton:;
- (BOOL)isPaused;
- (id)iconView;
- (id)loadingView;
- (void)setProgressView:;
- (long long)preferredStatusBarStyle;
- (void)setIconView:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)reset;
- (id)startTime;
- (void)backAction;
- (void)setIconImageView:;
- (void)setupUI;
- (void)resumeEffect;
- (void)addObservers;
- (id)loadingLabel;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)setupNavigationBar;
- (void)setLoadingLabel:;
- (id)loadingProgressView;
- (void)setLoadingProgressView:;
@end
