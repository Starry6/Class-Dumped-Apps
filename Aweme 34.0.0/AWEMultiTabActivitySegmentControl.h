@interface AWEMultiTabActivitySegmentControl : UIView
@property (nonatomic) UIButton backButton;
@property (nonatomic) UIButton walletButton;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView bottomLine;
@property (nonatomic) NSArray segArray;
@property (nonatomic) NSArray buttons;
@property (nonatomic) NSString selectedSegID;
@property (nonatomic) CAGradientLayer leftMaskLayer;
@property (nonatomic) CAGradientLayer rightMaskLayer;
@property (nonatomic) CAGradientLayer leftAndRightMaskLayer;
@property (nonatomic) NSMutableSet showedActivities;
@property (nonatomic) <AWEMultiTabActivitySegmentDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWESlidingViewController slidingViewController;
@property (nonatomic) q selectedIndex;
- (void)backButtonClick:;
- (id)slidingViewController;
- (void)setSlidingViewController:;
- (id)transformScaleWithButton:;
- (void)updateIrregularTextFrameWhenScroll:animated:;
- (void)scrollViewContentOffsetDidEndChanging;
- (void)slidingControllerDidScroll:;
- (void)setLeftMaskLayer:;
- (void)setRightMaskLayer:;
- (id)leftMaskLayer;
- (id)rightMaskLayer;
- (void)updateMaskLayer;
- (id)walletButton;
- (void)setSegArray:;
- (void)setSelectedSegID:;
- (void)setLeftAndRightMaskLayer:;
- (id)leftAndRightMaskLayer;
- (void)rebuildScrollUI;
- (unsigned long long)rebuildButtons;
- (void)rebuildBottomLine;
- (id)segArray;
- (void)tabClicked:;
- (id)selectedSegID;
- (id)showedActivities;
- (void)walletButtonClick:;
- (id)initWithSegArray:defaultSelectedSegID:delegate:;
- (void)updateMaskLayerFrameAndShowIfNeeded;
- (void)refreshTabUI;
- (void)setWalletButton:;
- (void)setShowedActivities:;
- (id)backButton;
- (void)setScrollView:;
- (void)setSelectedIndex:;
- (id)delegate;
- (void)setButtons:;
- (void)setBackButton:;
- (id)containerView;
- (id)buttons;
- (id)scrollView;
- (long long)selectedIndex;
- (void)setContainerView:;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)bottomLine;
- (void)setBottomLine:;
@end
