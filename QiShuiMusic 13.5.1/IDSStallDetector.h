@interface IDSStallDetector : NSObject
@property (nonatomic) BOOL verboseLogging;
@property (nonatomic) Q consumeDelayThreshold;
@property (nonatomic) double byteMovementDelayThreshold;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)consumeDelayThreshold;
- (void)setConsumeDelayThreshold:;
- (double)byteMovementDelayThreshold;
- (void)setByteMovementDelayThreshold:;
- (BOOL)consumeTimeCheckForEvent:produceTime:consumeTime:;
- (BOOL)byteMovementCheckForEvent:;
- (void)produceBytes:;
- (void)consumeBytes:;
- (void)forceTriggerStallDetectedBlockWithEventName:;
- (BOOL)verboseLogging;
- (void)setVerboseLogging:;
+ (id)newDetectorWithName:stallDetectedBlock:stallWarningBlock:;
+ (id)detectorWithName:;
+ (void)removeDetectorWithName:;
@end
