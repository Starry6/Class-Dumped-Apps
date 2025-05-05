@interface SignpostCAStallAggregationBuilder : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> syncQueue;
@property (nonatomic) SignpostCAStallAggregation stallAggregation;
@property (nonatomic) SignpostCAInstrumentationProcessor caInstrumentationProcessor;
@property (nonatomic) SignpostCAStallAggregation stallAggregationSnapshot;
@property (nonatomic) float maxDurationSec;
- (id)syncQueue;
- (id)init;
- (void)handleSignpostIntervalBegin:;
- (void)handleSignpostEvent:;
- (void)handleDeviceReboot;
- (void)handleSignpostInterval:;
- (id)caInstrumentationProcessor;
- (id)newConfiguredExtractor;
- (void).cxx_destruct;
- (void)_initializeCAInstrumentationProcessor;
- (void)addSubsystemCategoriesOfInterestToWhitelist:;
- (void)addSubsystemCategoriesOfInterestToAllowlist:;
- (void)_processDurationNs:type:processExecutablePath:pid:aggregateForSystem:;
- (id)stallAggregationSnapshot;
- (BOOL)_isOverThreshold:;
- (void)_handleLongCommit:;
- (void)_handleLongTransactionLifetime:;
- (void)_handleLongFrameLifetime:;
- (float)maxDurationSec;
- (void)setMaxDurationSec:;
- (id)stallAggregation;
@end
