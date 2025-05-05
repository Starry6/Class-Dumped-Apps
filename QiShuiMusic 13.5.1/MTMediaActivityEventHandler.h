@interface MTMediaActivityEventHandler : MTEventHandler
@property (nonatomic) <MTMediaActivityEventHandlerDelegate> delegate;
- (id)knownFields;
- (id)eventVersion:;
- (void)didCreateMetricsData:;
- (id)metricsDataForStartActionWithPosition:overallPosition:type:reason:eventData:;
- (id)metricsDataForStopActionWithPosition:overallPosition:type:reason:startMetricsData:eventData:;
@end
