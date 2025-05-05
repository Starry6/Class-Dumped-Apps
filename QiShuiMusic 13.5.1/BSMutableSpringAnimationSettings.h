@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double epsilon;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double delay;
@property (nonatomic) double frameInterval;
@property (nonatomic) {CAFrameRateRange=fff} preferredFrameRateRange;
@property (nonatomic) I highFrameRateReason;
@property (nonatomic) CAMediaTimingFunction timingFunction;
@property (nonatomic) float speed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDamping:;
- (void)setStiffness:;
- (void)setFrameInterval:;
- (void)setTimingFunction:;
- (void)setHighFrameRateReason:;
- (void)setSpeed:;
- (void)setMass:;
- (void)setEpsilon:;
- (void)setPreferredFrameRateRange:;
- (void)setInitialVelocity:;
- (void)setDelay:;
@end
