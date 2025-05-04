@interface AWEFriendsFilterGuideView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView filterGuideHintView;
@property (nonatomic) DUXLottieView hintAnimationView;
- (id)filterGuideHintView;
- (id)hintAnimationView;
- (void)setHintAnimationView:;
- (void)setFilterGuideHintView:;
- (void)removeGuideView;
- (void)showGuideViewWithDismissCompletion:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
