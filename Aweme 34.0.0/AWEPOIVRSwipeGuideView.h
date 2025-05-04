@interface AWEPOIVRSwipeGuideView : UIView
@property (nonatomic) UIView leftBackgroundView;
@property (nonatomic) UIView rightBackgroundView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) NSString text;
@property (nonatomic) LOTAnimationView animationView;
@property (nonatomic) BOOL willDismiss;
@property (nonatomic) @? dismissBlock;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)setWillDismiss:;
- (void)setLeftBackgroundView:;
- (id)leftBackgroundView;
- (void)setRightBackgroundView:;
- (id)rightBackgroundView;
- (void)play;
- (void)setText:;
- (id)text;
- (void)dismiss;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (BOOL)willDismiss;
- (void)setupUI;
- (id)animationView;
- (void)setAnimationView:;
- (id)initWithFrame:text:;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
