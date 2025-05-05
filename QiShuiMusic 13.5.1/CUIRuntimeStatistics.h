@interface CUIRuntimeStatistics : NSObject
- (long long)shortCircuitImageLookup;
- (id)init;
- (void)dealloc;
- (void)incrementMissedLookup;
- (void)incrementStaticsProbe;
- (void)incrementStaticsInitialLookup;
- (void)incrementStatisticLookup;
- (void)incrementStatisticDidShortCircuitImageLookup;
- (void)addStatisticAllocatedImageSize:roundedSize:;
+ (id)sharedRuntimeStatistics;
+ (void)generateLog;
@end
