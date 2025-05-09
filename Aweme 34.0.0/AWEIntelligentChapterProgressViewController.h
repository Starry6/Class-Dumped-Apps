@interface AWEIntelligentChapterProgressViewController : UIViewController
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView closeArea;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView loadingView;
@property (nonatomic) UILabel loadingLabel;
@property (nonatomic) UILabel loadingDetailLabel;
@property (nonatomic) DUXLoadingCircleView loadingToastView;
@property (nonatomic) UIImageView asynImageView;
@property (nonatomic) UIButton loadingCancelButton;
@property (nonatomic) UIButton loadingAsynCancelButton;
@property (nonatomic) UIView errorView;
@property (nonatomic) UILabel errorTitleLabel;
@property (nonatomic) UILabel errorCaptionLabel;
@property (nonatomic) UIButton errorRetryButton;
@property (nonatomic) UIButton errorCancelButton;
@property (nonatomic) UIView chapterFailedView;
@property (nonatomic) UILabel chapterFailedLabel;
@property (nonatomic) UIButton addButton;
@property (nonatomic) UIView chapterAutoSwitchContainerView;
@property (nonatomic) UILabel chapterAutoTitleLabel;
@property (nonatomic) DUXSwitch chapterAutoSwitch;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) UIButton bottomCancelButton;
@property (nonatomic) q status;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isChapterPoints;
@property (nonatomic) BOOL chapterAutoApplySwitchIsOn;
@property (nonatomic) @? closeBlock;
@property (nonatomic) @? stopFlowBlock;
@property (nonatomic) @? retryBlock;
@property (nonatomic) @? addBlock;
@property (nonatomic) @? asynCancelBlock;
@property (nonatomic) @? asynKnowBlock;
@property (nonatomic) @? autoApplySwitchValueChanged;
- (void)p_setupUI;
- (void)setCloseBlock:;
- (id)closeBlock;
- (id)closeBtn;
- (void)setCloseBtn:;
- (id)bottomCancelButton;
- (void)setBottomCancelButton:;
- (void)showOnVC:;
- (void)setAddBlock:;
- (void)p_setupLoadingUI;
- (void)didClickCloseButton:;
- (void)resetSubviews;
- (id)loadingCancelButton;
- (void)setLoadingCancelButton:;
- (void)p_setupErrorUI;
- (id)loadingToastView;
- (id)errorCaptionLabel;
- (id)errorRetryButton;
- (id)errorCancelButton;
- (id)p_createButtonWithTitle:;
- (void)retryButtonAction:;
- (void)setLoadingToastView:;
- (void)setErrorCaptionLabel:;
- (void)setErrorRetryButton:;
- (void)setErrorCancelButton:;
- (BOOL)isChapterPoints;
- (void)setIsChapterPoints:;
- (BOOL)isAsynIntelligentChapterEnable;
- (id)closeArea;
- (void)setCloseArea:;
- (void)closeWithAnimation;
- (void)setStopFlowBlock:;
- (BOOL)isIntelligentChapterAutoApplyStyle;
- (void)setAsynCancelBlock:;
- (void)setAsynKnowBlock:;
- (void)setAutoApplySwitchValueChanged:;
- (void)setChapterAutoApplySwitchIsOn:;
- (void)setupIntelligentChapterAutoApplyUI;
- (void)p_setupLoadingUIForAsyn;
- (void)p_setupFailedUI;
- (id)loadingDetailLabel;
- (id)asynImageView;
- (id)loadingAsynCancelButton;
- (id)chapterFailedView;
- (id)chapterFailedLabel;
- (id)chapterAutoSwitchContainerView;
- (id)chapterAutoTitleLabel;
- (id)chapterAutoSwitch;
- (void)updateNotLoadingState:;
- (id)asynKnowBlock;
- (id)stopFlowBlock;
- (id)asynCancelBlock;
- (double)intelligentChapterProgressContainerHeight;
- (void)didClickStopFlowButton:;
- (void)didClickAsynCancelButton:;
- (void)didAddButton:;
- (BOOL)chapterAutoApplySwitchIsOn;
- (id)autoApplySwitchValueChanged;
- (void)setLoadingDetailLabel:;
- (void)setAsynImageView:;
- (void)setLoadingAsynCancelButton:;
- (void)setChapterFailedView:;
- (void)setChapterFailedLabel:;
- (void)setChapterAutoSwitchContainerView:;
- (void)setChapterAutoTitleLabel:;
- (void)setChapterAutoSwitch:;
- (void)setStatus:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (void)resetProgress;
- (double)progress;
- (id)containerView;
- (id)loadingView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (long long)status;
- (id)titleLabel;
- (void)setProgress:;
- (id)addButton;
- (id)loadingLabel;
- (void)setLoadingLabel:;
- (void)setAddButton:;
- (id)errorView;
- (void)setErrorView:;
- (id)errorTitleLabel;
- (void)setErrorTitleLabel:;
- (id)addBlock;
- (id)retryBlock;
- (void)setRetryBlock:;
@end
