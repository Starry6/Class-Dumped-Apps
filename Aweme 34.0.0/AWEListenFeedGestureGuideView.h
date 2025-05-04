@interface AWEListenFeedGestureGuideView : UIView
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) LOTAnimationView animationView;
@property (nonatomic) BOOL willDismiss;
@property (nonatomic) @? dismissedBlock;
- (void)initSubviews;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)setDismissedBlock:;
- (id)dismissedBlock;
- (void)setWillDismiss:;
- (void)play;
- (id)initWithFrame:;
- (void)dismiss;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (BOOL)willDismiss;
- (void)initConstraints;
- (id)animationView;
- (void)setAnimationView:;
@end
