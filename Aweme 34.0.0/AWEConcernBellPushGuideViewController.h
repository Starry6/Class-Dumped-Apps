@interface AWEConcernBellPushGuideViewController : AWEHalfScreenBaseViewController
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) UIImageView closeImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIButton leftButton;
@property (nonatomic) DUXAbandonedButton rightButton;
@property (nonatomic) Q pageType;
@property (nonatomic) AWEVideoPlayerController playerController;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) @? alertCloseBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (void)playbackDidFailForURL:error:;
- (void)preparedToPlayForURL:;
- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (void)configPlayer;
- (void)updateSubTitle;
- (id)alertCloseBlock;
- (void)p_trackWithAuthorID:ActionType:clickType:;
- (void)onClosePanelViewClick:;
- (void)onGotoSettingButtonClick;
- (id)initWithUserModel:pageType:;
- (void)trackWithAuthorID:ActionType:;
- (void)setAlertCloseBlock:;
- (void)setLeftButton:;
- (void)setRightButton:;
- (BOOL)isPlaying;
- (void)dealloc;
- (id)leftButton;
- (void)setPlayerController:;
- (unsigned long long)viewStyle;
- (void)viewDidLoad;
- (void)setPageType:;
- (id)rightButton;
- (void)dismiss;
- (id)playerController;
- (void)setTitleLabel:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (id)userModel;
- (id)titleLabel;
- (unsigned long long)pageType;
- (void)setIsPlaying:;
- (unsigned long long)animationStyle;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (double)containerWidth;
- (id)closeImageView;
- (void)setCloseImageView:;
- (double)containerHeight;
+ (Class)aAWEPadModuleAdapterClass;
+ (id)createFileNameWithPageType:;
+ (BOOL)geckoResourceDownloadSuccessWithPageType:;
+ (BOOL)isDarkMode;
@end
