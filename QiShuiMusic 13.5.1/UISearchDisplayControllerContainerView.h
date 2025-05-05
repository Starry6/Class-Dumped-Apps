@interface UISearchDisplayControllerContainerView : UIView
@property (nonatomic) NSLayoutConstraint topViewHeightConstraint;
@property (nonatomic) NSLayoutConstraint topViewAttributeTopConstraint;
@property (nonatomic) UIView topView;
@property (nonatomic) UIView bottomView;
@property (nonatomic) UIView behindView;
- (void)_didMoveFromWindow:toWindow:;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (id)initWithFrame:topViewHeight:;
- (void)updateTopViewHeight:;
- (void)updateTopViewHeight:animateUpdate:;
- (void)collapseTopView;
- (void)setBottomViewUserInteractionEnabled:;
- (void)updateTopAttributeConstant:;
- (void)adjustTopAttributeConstantByDelta:;
- (void)configureInteractionForContainment:;
- (id)topViewHeightConstraint;
- (void)setTopViewHeightConstraint:;
- (id)topViewAttributeTopConstraint;
- (void)setTopViewAttributeTopConstraint:;
- (id)topView;
- (id)bottomView;
- (id)behindView;
@end
