@interface AWEIMFlexAnimationConfig : NSObject
@property (nonatomic) Q option;
@property (nonatomic) BOOL useSpringAnimation;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) double dampingRatio;
@property (nonatomic) double velocity;
@property (nonatomic) Q animationOptions;
@property (nonatomic) CAMediaTimingFunction timingFunction;
- (BOOL)useSpringAnimation;
- (void)setUseSpringAnimation:;
- (id)timingFunction;
- (id)init;
- (void)setTimingFunction:;
- (void)setDampingRatio:;
- (void)setVelocity:;
- (void)setDuration:;
- (void)setDelay:;
- (double)velocity;
- (double)delay;
- (double)dampingRatio;
- (void)setOption:;
- (void).cxx_destruct;
- (double)duration;
- (unsigned long long)animationOptions;
- (void)setAnimationOptions:;
- (unsigned long long)option;
@end
