@interface CSExtensionJobThrottle : NSObject
@property (nonatomic) Q maxRetryCount;
@property (nonatomic) Q minSecondsBetweenRetries;
@property (nonatomic) Q maxSecondsBetweenRetries;
@property (nonatomic) Q minSecondsBetweenRetriesUnderMemoryPressure;
@property (nonatomic) Q maxSecondsBetweenRetriesUnderMemoryPressure;
@property (nonatomic) NSMutableDictionary countersByBundleID;
- (unsigned long long)maxRetryCount;
- (void)setMaxRetryCount:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (long long)nextDispatchTimeDeltaForExtension:job:memoryPressure:;
- (unsigned long long)minSecondsBetweenRetries;
- (void)setMinSecondsBetweenRetries:;
- (unsigned long long)maxSecondsBetweenRetries;
- (void)setMaxSecondsBetweenRetries:;
- (unsigned long long)minSecondsBetweenRetriesUnderMemoryPressure;
- (void)setMinSecondsBetweenRetriesUnderMemoryPressure:;
- (unsigned long long)maxSecondsBetweenRetriesUnderMemoryPressure;
- (void)setMaxSecondsBetweenRetriesUnderMemoryPressure:;
- (id)countersByBundleID;
- (void)setCountersByBundleID:;
@end
