@interface AnimationEngine : NSObject
@property (nonatomic) float position;
@property (nonatomic) float velocity;
- (void)setPosition:;
- (float)velocity;
- (float)position;
- (void)setVelocity:;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
- (void)animateWithDuration:toValue:animations:options:atTime:;
- (void)driveAnimationAtTime:withConstraints:withMultiplier:;
- (void)_resetAnimations;
@end
