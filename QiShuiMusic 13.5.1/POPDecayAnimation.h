@interface POPDecayAnimation : POPPropertyAnimation
@property (nonatomic) @ velocity;
@property (nonatomic) @ originalVelocity;
@property (nonatomic) double deceleration;
@property (nonatomic) double duration;
- (void)_appendDescription:debug:;
- (void)_ensureComputedProperties;
- (void)_initState;
- (void)_invalidateComputedProperties;
- (id)originalVelocity;
- (id)reversedVelocity;
- (id)velocity;
- (id)init;
- (void)setVelocity:;
- (double)duration;
- (id)copyWithZone:;
- (void)setFromValue:;
- (id)toValue;
- (void)setToValue:;
- (double)deceleration;
- (void)setDeceleration:;
+ (id)animationWithPropertyNamed:;
+ (id)animation;
@end
