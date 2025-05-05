@interface PAAggregateVisibilityStateMonitor : NSObject
- (void).cxx_destruct;
- (id)initWithRawMonitor:startupInterval:;
- (id)startMonitoringAggregateVisibilityStateForBundleIdentifiers:onQueue:withDelegate:;
@end
