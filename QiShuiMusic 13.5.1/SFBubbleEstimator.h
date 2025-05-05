@interface SFBubbleEstimator : NSObject
@property (nonatomic) BOOL insideBubble;
@property (nonatomic) BOOL insideBubbleWithThreshold;
@property (nonatomic) BOOL preventBoost;
@property (nonatomic) q rssiEnter;
@property (nonatomic) q rssiExit;
@property (nonatomic) double thresholdSeconds;
@property (nonatomic) double velocity;
@property (nonatomic) double velocitySmoothed;
- (double)velocity;
- (BOOL)insideBubble;
- (void).cxx_destruct;
- (void)reset;
- (double)velocitySmoothed;
- (long long)updateWithRSSI:;
- (BOOL)shouldExpandBubble;
- (void)setThresholdSeconds:;
- (BOOL)insideBubbleWithThreshold;
- (BOOL)preventBoost;
- (void)setPreventBoost:;
- (long long)rssiEnter;
- (void)setRssiEnter:;
- (long long)rssiExit;
- (void)setRssiExit:;
- (double)thresholdSeconds;
+ (id)estimatorWithEnter:exit:;
+ (id)estimatorWithEnter:exit:threshold:;
@end
