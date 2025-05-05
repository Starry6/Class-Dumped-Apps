@interface IESLIveDFSpringAnimationContext : IESLiveDFAnimationContext
@property (nonatomic) @ fromValue;
@property (nonatomic) @ toValue;
@property (nonatomic) q repeatCount;
@property (nonatomic) CAMediaTimingFunction timingFunction;
@property (nonatomic) BOOL bounce;
@property (nonatomic) double damping;
@property (nonatomic) double velocity;
- (long long)repeatCount;
- (double)velocity;
- (void)setRepeatCount:;
- (void)setDamping:;
- (void)setVelocity:;
- (void)setTimingFunction:;
- (BOOL)bounce;
- (double)damping;
- (id)timingFunction;
- (void).cxx_destruct;
- (id)fromValue;
- (void)setFromValue:;
- (id)toValue;
- (void)setToValue:;
- (void)setBounce:;
@end
