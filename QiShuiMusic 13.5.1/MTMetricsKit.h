@interface MTMetricsKit : MTMetricsKitTemplate
- (id)initWithTopic:;
- (void)performMaintenanceForUserId:;
- (id)metricsDataWithFlexibleEventType:eventData:;
- (id)metricsDataWithFlexibleEventType:fields:;
@end
