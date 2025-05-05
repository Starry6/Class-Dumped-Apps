@interface BSMutableAnimationSettings : BSAnimationSettings
@property (nonatomic) double duration;
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
- (void)setFrameInterval:;
- (void)setTimingFunction:;
- (void)setHighFrameRateReason:;
- (void)setSpeed:;
- (void)setPreferredFrameRateRange:;
- (void)setDelay:;
- (void)setDuration:;
@end
