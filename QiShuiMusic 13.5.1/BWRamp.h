@interface BWRamp : NSObject
@property (nonatomic) BOOL isRamping;
@property (nonatomic) float currentValue;
@property (nonatomic) BOOL isRampingUp;
- (id)init;
- (void)dealloc;
- (float)currentValue;
- (void)startRampFrom:to:iterations:shape:exponentialConvergenceFraction:;
- (id)initWithName:;
- (BOOL)isRampingUp;
- (float)updateRampForNextIteration;
- (BOOL)isRamping;
- (void)reset;
- (void)startRampFrom:to:iterations:shape:;
@end
