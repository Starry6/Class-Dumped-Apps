@interface AWEFeedPicoVRGuideView : UIView
@property (nonatomic) q type;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) LOTAnimationView animationView;
@property (nonatomic) BOOL willDismiss;
@property (nonatomic) @? dismissedBlock;
- (void)initSubviews;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (id)tipText;
- (void)setDismissedBlock:;
- (id)dismissedBlock;
- (id)lottieName;
- (void)setWillDismiss:;
- (void)play;
- (id)initWithFrame:;
- (void)dismiss;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (BOOL)willDismiss;
- (void)initConstraints;
- (id)animationView;
- (void)setAnimationView:;
- (id)initWithFrame:type:;
@end
