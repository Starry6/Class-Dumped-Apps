@interface BWSpringSimulation : NSObject
@property (nonatomic) double input;
@property (nonatomic) double tension;
@property (nonatomic) double friction;
@property (nonatomic) double output;
@property (nonatomic) double velocity;
@property (nonatomic) BOOL completed;
@property (nonatomic) NSInteger updateCount;
- (double)tension;
- (double)friction;
- (double)velocity;
- (double)output;
- (double)input;
- (void)setTension:;
- (id)init;
- (void)setInput:;
- (BOOL)isCompleted;
- (void)update;
- (void)setFriction:;
- (int)updateCount;
- (void)resetWithInput:initialOutput:initialVelocity:;
- (void)resetWithInput:initialOutput:initialVelocity:convergedSpeed:;
@end
