@interface AWELivePrestreamGuideView : UIView
@property (nonatomic) AWELiveFeedStatusViewModel viewModel;
@property (nonatomic) UIView leftLine;
@property (nonatomic) UIView rightLine;
@property (nonatomic) UIView centerContainer;
@property (nonatomic) UIImageView landscapeImageView;
@property (nonatomic) UIView landscapeContainer;
@property (nonatomic) UIView lableContainer;
@property (nonatomic) AWELiveFeedStatusLabel centerLabel;
@property (nonatomic) AWELiveFeedStatusLabel nextAnimationLable;
@property (nonatomic) CAShapeLayer degradeBreathLayer;
@property (nonatomic) BOOL needResetAutoEnterStyle;
@property (nonatomic) BOOL lastLandscapeStatus;
- (void)bindViewModel:;
- (id)leftLine;
- (void)setLeftLine:;
- (id)rightLine;
- (void)setRightLine:;
- (void)removeAllAnimation;
- (id)liveStatusTipLabel;
- (BOOL)isShowingAutoEnterAnimation;
- (void)startStatusLabelAnimationIfNeeded;
- (void)resetUIState;
- (void)removeAutoEnter;
- (void)stopStatusLabelAnimation;
- (void)clearStatusLabelAnimation;
- (void)startAutoEnterAnimation:cancelAction:roomID:duration:;
- (void)updateShowingAutoEnterAnimationState:;
- (void)beginNewAutoEnter;
- (void)startNewAutoEnterAnimating:;
- (void)resetNewAutoEnterState;
- (BOOL)allowDegradeBreathAnimation;
- (id)landscapeContainer;
- (void)setLandscapeContainer:;
- (void)seupUI;
- (void)setLastLandscapeStatus:;
- (void)setLableContainer:;
- (id)lableContainer;
- (void)bindXLiveObserveWithViewModel:;
- (void)bindRACObserveWithViewModel:;
- (void)hideDegradeBreathLayer;
- (void)showDegradeBreathLayer;
- (BOOL)needResetAutoEnterStyle;
- (void)setNeedResetAutoEnterStyle:;
- (void)startWeakEntranceBgAnimation;
- (void)updateLandscapeContainer:;
- (void)updateLandscapeLayoutIfNeed:;
- (id)landscapeImageView;
- (void)updateLandscapeLayout;
- (void)updateNormalLayout;
- (id)nextAnimationLable;
- (id)degradeBreathLayer;
- (void)p_addNextCenterLabel;
- (void)setLandscapeImageView:;
- (void)setNextAnimationLable:;
- (void)setDegradeBreathLayer:;
- (BOOL)lastLandscapeStatus;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)initWithFrame:viewModel:;
- (void)setCenterLabel:;
- (id)centerLabel;
- (id)centerContainer;
- (void)setCenterContainer:;
- (void)updateWithStyle:;
@end
