@interface AWESearchCardDiggButton : AWESearchCardInteractorButton
@property (nonatomic) AWESearchCardDiggModel model;
@property (nonatomic) UIView<_TtP9AWELottie13AWELottieView_> diggAnimationView;
@property (nonatomic) BOOL diggAnimationInProgress;
- (void)updateDiggCount;
- (void)removeAnimation;
- (void)startDiggAnimation;
- (void)setDiggAnimationInProgress:;
- (void)addDiggAnimation;
- (void)addUnDiggAnimation;
- (void)setDiggAnimationView:;
- (id)diggAnimationView;
- (BOOL)diggAnimationInProgress;
- (void)stopDiggAnimation;
- (void)startUnDiggAnimation;
- (void)stopUndiggAnimation;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)updateWithModel:;
@end
