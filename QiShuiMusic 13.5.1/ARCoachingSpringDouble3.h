@interface ARCoachingSpringDouble3 : NSObject
@property (nonatomic) NSArray springs;
@property (nonatomic)  value;
@property (nonatomic)  target;
@property (nonatomic)  velocity;
@property (nonatomic)  floatValue;
@property (nonatomic) double response;
@property (nonatomic) double dampingRatio;
- (id)velocity;
- (id)floatValue;
- (id)init;
- (void)setVelocity:;
- (double)dampingRatio;
- (void)setTarget:;
- (void)setValue:;
- (double)response;
- (void)setFloatValue:;
- (void).cxx_destruct;
- (id)target;
- (id)value;
- (void)setResponse:;
- (void)setDampingRatio:;
- (id)springs;
- (void)stepWithDeltaTime:;
@end
