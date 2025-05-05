@interface CHSMutableWidgetMetricsSpecification : CHSWidgetMetricsSpecification
@property (nonatomic) NSMutableDictionary metricsByFamily;
@property (nonatomic) NSMutableDictionary alternatesByFamily;
- (id)_initWithMetricsByFamily:alternates:;
- (void)setMetrics:forFamily:;
- (id)metricsByFamily;
- (void)setAlternateMetrics:forFamily:;
- (id)alternatesByFamily;
- (id)copyWithZone:;
@end
