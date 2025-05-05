@interface TITypologyTimer : NSObject
@property (nonatomic) double elapsedTime;
@property (nonatomic) double mostRecentTimestamp;
@property (nonatomic) double maxTimeIntervalBetweenInputs;
@property (nonatomic) BOOL foundFirstInput;
- (void)setElapsedTime:;
- (void)setMostRecentTimestamp:;
- (BOOL)foundFirstInput;
- (double)elapsedTime;
- (double)mostRecentTimestamp;
- (void)setFoundFirstInput:;
- (void)setMaxTimeIntervalBetweenInputs:;
- (double)maxTimeIntervalBetweenInputs;
- (void)addInputEventWithTimestamp:;
@end
