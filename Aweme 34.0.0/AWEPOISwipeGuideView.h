@interface AWEPOISwipeGuideView : UIView
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) NSString text;
@property (nonatomic) LOTAnimationView animationView;
@property (nonatomic) BOOL willDismiss;
@property (nonatomic) Q direction;
@property (nonatomic) @? dismissBlock;
- (void)initSubviews;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)setWillDismiss:;
- (id)initWithFrame:direction:customText:;
- (void)play;
- (unsigned long long)direction;
- (void)setText:;
- (id)text;
- (void)dismiss;
- (void)setDirection:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (BOOL)willDismiss;
- (void)initConstraints;
- (id)animationView;
- (void)setAnimationView:;
- (id)animationName;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
