@interface MXAudioStatistics : NSObject
- (id)initInternal;
- (void)sendSinglePerformanceMessageForRoutine:operationTime:details:;
+ (id)sharedInstance;
@end
