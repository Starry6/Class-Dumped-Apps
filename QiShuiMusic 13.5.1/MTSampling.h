@interface MTSampling : NSObject
@property (nonatomic) NSMutableDictionary sessions;
- (void)setSessions:;
- (id)init;
- (id)sessions;
- (void).cxx_destruct;
- (BOOL)isSampledInWithMetricsData:;
- (BOOL)isSampledInWithEventType:samplingForced:sessionSamplingPercentage:sessionDuration:samplingPercentage:;
- (BOOL)isSampledInWithEventType:sessionSamplingPercentage:sessionDurationMs:;
- (void)clearSessionWithEventType:;
- (BOOL)isSampledInWithSamplingPercentage:;
@end
