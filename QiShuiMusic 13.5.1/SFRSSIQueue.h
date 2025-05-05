@interface SFRSSIQueue : NSObject
@property (nonatomic) double velocity;
@property (nonatomic) double velocitySmoothed;
- (double)velocity;
- (void).cxx_destruct;
- (void)addSample:atTicks:;
- (double)velocitySmoothed;
- (double)velocityFromA:toB:;
@end
