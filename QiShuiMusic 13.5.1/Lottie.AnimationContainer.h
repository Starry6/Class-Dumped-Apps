@interface Lottie.AnimationContainer : CALayer
@property (nonatomic) double currentFrame;
- (double)currentFrame;
- (void)setCurrentFrame:;
- (id)actionForKey:;
- (id)init;
- (void)display;
- (id)initWithCoder:;
- (id)initWithLayer:;
- (void).cxx_destruct;
+ (BOOL)needsDisplayForKey:;
@end
