@interface ARCoachingBasicSpring : NSObject
@property (nonatomic) float tension;
@property (nonatomic) float friction;
@property (nonatomic) float input;
@property (nonatomic) float output;
- (float)tension;
- (float)friction;
- (float)output;
- (float)input;
- (void)setTension:;
- (void)setInput:;
- (void)setFriction:;
- (id)initWithTension:friction:;
- (void)stepWithDeltaTime:;
- (void)setInput:velocity:;
@end
