@interface Lottie.AnimationView : Lottie.LottieView
@property (nonatomic) NSString animationName;
@property (nonatomic) {CGSize=dd} intrinsicContentSize;
- (void)animationWillEnterForeground;
- (void)animationWillMoveToBackground;
- (void)setAnimationName:;
- (id)init;
- (void)dealloc;
- (id)intrinsicContentSize;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)animationName;
@end
