@interface IESLiveMultiLinkerOwnerView : HTSEventForwardingView
@property (nonatomic) Q layoutType;
@property (nonatomic) UILabel ownerLabel;
@property (nonatomic) IESLiveMultilinkerLargeProfileView ownerLabelView;
@property (nonatomic) IESLiveMultiLinkerInteractScoreButton interactScoreButtonView;
@property (nonatomic) IESLiveMultiLinkerLastResultView resultView;
@property (nonatomic) IESLiveMultiLinkerLargeSmallView largeSmallView;
@property (nonatomic) double largeSmallViewWidth;
@property (nonatomic) double largeSmallViewLeading;
@property (nonatomic) double largeSmallViewTop;
@property (nonatomic) IESLiveMultiLinkerApi api;
@property (nonatomic) <IESLiveMultiLinkerProvider> provider;
@property (nonatomic) IESLiveAudiencePauseTipView tipView;
@property (nonatomic) HTSLiveGradientBackgroundView tipBackgroundView;
@property (nonatomic) HTSLiveGradientBackgroundView maskView;
@property (nonatomic) IESLiveRevenueInteractEnlargeActionPanel ownerActionPanel;
@property (nonatomic) <IESLiveInteractUserModel> user;
@property (nonatomic) BOOL didUpdateUser;
@property (nonatomic) BOOL didUpdate;
@property (nonatomic) UIView tipViewSuperview;
@property (nonatomic) IESLiveAnchorMultiLinkerLoadingView loadingView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindAction;
- (BOOL)didUpdateUser;
- (void)handleNativeComponents:;
- (id)initWithDIContext:;
- (id)interactScoreButtonView;
- (BOOL)isNeedShowResultView;
- (id)largeSmallView;
- (double)largeSmallViewLeading;
- (double)largeSmallViewTop;
- (double)largeSmallViewWidth;
- (void)onOwnerViewClicked;
- (void)onReceivedClearNotification:;
- (id)ownerActionPanel;
- (id)ownerLabel;
- (id)ownerLabelView;
- (void)p_getInfoViewsOffset;
- (double)p_getInteractScorePadBottomOffset;
- (id)p_makeGradientViewFromPoint:toPoint:fromColor:toColor:;
- (void)p_showOrHideTipView:;
- (void)setDidUpdateUser:;
- (void)setInteractScoreButtonView:;
- (void)setLargeSmallView:;
- (void)setLargeSmallViewLeading:;
- (void)setLargeSmallViewTop:;
- (void)setLargeSmallViewWidth:;
- (void)setOwnerActionPanel:;
- (void)setOwnerLabel:;
- (void)setOwnerLabelView:;
- (void)setTipBackgroundView:;
- (void)setTipViewSuperview:;
- (void)showInteractScoreButton:;
- (id)tipBackgroundView;
- (id)tipViewSuperview;
- (void)updateActive:;
- (void)updateInteractScore:;
- (void)updateInteractScorePositionWithSessionCount:;
- (void)updateLargeSmallView;
- (void)updateLayoutWithType:;
- (void)updateOwnerTipBackgroungViewIfNeeed;
- (void)updateResultViewShow;
- (void)updateResultViewShow:;
- (unsigned long long)layoutType;
- (id)connectionType;
- (void)setUser:;
- (void)setProvider:;
- (void)setLayoutType:;
- (id)maskView;
- (void)setFrame:;
- (id)hitTest:withEvent:;
- (BOOL)didUpdate;
- (id)provider;
- (id)user;
- (void).cxx_destruct;
- (void)setMaskView:;
- (void)setDidUpdate:;
- (void)setupUI;
- (id)resultView;
- (void)setResultView:;
- (id)loadingView;
- (void)setLoadingView:;
- (id)tipView;
- (void)setTipView:;
- (id)api;
- (void)updateUser:;
- (void)setApi:;
@end
