@interface AWEPlayInteractionLearnMoreElement : AWEPlayInteractionLeftElement
@property (nonatomic) UIView<AWEAdFeedLearnMoreView> learnMoreView;
@property (nonatomic) UIView mannorLearnMoreView;
@property (nonatomic) UIView<AWEAdFeedLearnMoreView> leftLearnMoreView;
@property (nonatomic) UIView interactionExpandingView;
@property (nonatomic) NSString shouldShowItemID;
@property (nonatomic) BOOL obscured;
@property (nonatomic) UIView buttonAnimationView;
@property (nonatomic) NSTimer animationTimer;
@property (nonatomic) double animationTimeInterval;
@property (nonatomic) AWEAdFeedTagListView tagListView;
@property (nonatomic) BOOL isCellAppeared;
@property (nonatomic) BOOL isDelayLoad;
@property (nonatomic) UIStackView learnMoreContainerStackView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishFollowUser:status:error:;
- (void)initializeElement;
- (void)detectAbnormalDisplay;
- (void)viewController_willDisplay;
- (void)viewController_viewWillAppear;
- (id)aAWEPadModuleAdapter;
- (void)flashLearnMoreViewWithAnimation:;
- (void)liveDidEnd:;
- (void)updateLearnMoreView;
- (void)playAnimationForFollowAd;
- (void)reShowBtnWhenAdUnfollow;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (id)learnMoreView;
- (void)setLearnMoreView:;
- (id)currentInfoForSubUnits;
- (id)adMannorCardManager;
- (id)learnMoreViewBackgroundColorWhenShow;
- (id)learnMoreViewTipsLabelTextColorWhenShow;
- (id)learnMoreViewTipsLabelTextColorWhenDismiss;
- (void)promptViewDisappearingDebugHandler;
- (id)getLearnMoreViewFrameInView:;
- (id)learnMoreContainerStackView;
- (void)setLearnMoreContainerStackView:;
- (void)showLearnMoreNormalView:;
- (void)onLearnMoreViewClicked:extParam:;
- (void)onLearnMoreViewClicked:;
- (void)playAdLearnMoreViewAnimation;
- (void)setShouldShowItemID:;
- (void)setupExtraClickArea;
- (id)currentLearnMoreView;
- (id)leftLearnMoreView;
- (id)interactionExpandingView;
- (id)tagListView;
- (double)learnMoreViewFitHeight;
- (void)setIsDelayLoad:;
- (id)shouldShowItemID;
- (id)mannorLearnMoreView;
- (BOOL)isDelayLoad;
- (void)trackAdButtonShow;
- (double)animationTimeInterval;
- (void)setAnimationTimeInterval:;
- (void)flashLearnMoreNormalViewWithAnimation:;
- (void)resetAdMannorCardManager;
- (id)getAdMannorCardManagerFromContext;
- (void)viewDidDisposed;
- (BOOL)showLoadView;
- (void)onTagsViewClicked:;
- (BOOL)shouldShowAdMannorNativeLearnMoreView;
- (id)buttonAnimationView;
- (void)setButtonAnimationView:;
- (void)playFollowAnimation;
- (void)hideLearnMoreNormalView;
- (id)realFrame;
- (void)ins_animationDidStop:finished:isReusableSafe:;
- (void)setMannorLearnMoreView:;
- (void)setLeftLearnMoreView:;
- (void)setInteractionExpandingView:;
- (void)setTagListView:;
- (BOOL)isCellAppeared;
- (void)setIsCellAppeared:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setObscured:;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
- (BOOL)appear;
- (BOOL)obscured;
- (id)currentInfo;
- (id)animationTimer;
- (void)setAnimationTimer:;
+ (Class)aAWEPadModuleAdapterClass;
+ (id)activateInfoWithContext:;
@end
