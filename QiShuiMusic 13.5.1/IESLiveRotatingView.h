@interface IESLiveRotatingView : UIView
@property (nonatomic) BOOL waitingForAnimate;
@property (nonatomic) @? viewCreateBlock;
@property (nonatomic) double transalateDistance;
@property (nonatomic) double translateAnimationTime;
@property (nonatomic) double alphaAnimationTime;
@property (nonatomic) UIView firstView;
@property (nonatomic) q animationDirection;
- (id)viewCreateBlock;
- (double)alphaAnimationTime;
- (void)setAlphaAnimationTime:;
- (void)setTransalateDistance:;
- (void)setTranslateAnimationTime:;
- (void)setViewCreateBlock:;
- (void)setWaitingForAnimate:;
- (double)transalateDistance;
- (double)translateAnimationTime;
- (BOOL)waitingForAnimate;
- (void)setAnimationDirection:;
- (void)layoutSubviews;
- (void)startAnimation;
- (long long)animationDirection;
- (void).cxx_destruct;
- (id)initWithCreateViewBlock:;
- (void)setFirstView:;
- (id)firstView;
@end
