@interface VCPMADCoreAnalyticsManager : NSObject
- (id)init;
- (void)dealloc;
- (void)setValue:forField:andEvent:;
- (void)sendEvent:withAnalytics:;
- (void)flush;
- (void)accumulateDoubleValue:forField:andEvent:;
- (void).cxx_destruct;
- (void)accumulateInt64Value:forField:andEvent:;
- (void)sendSessionEvent:;
- (id)valueForField:andEvent:;
+ (id)sharedManager;
@end
