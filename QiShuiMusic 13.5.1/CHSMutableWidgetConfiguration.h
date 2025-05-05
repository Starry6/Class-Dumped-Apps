@interface CHSMutableWidgetConfiguration : CHSWidgetConfiguration
@property (nonatomic) NSArray containerDescriptors;
@property (nonatomic) CHSWidgetMetricsSpecification metricsSpecification;
- (void)setContainerDescriptors:;
- (void)setMetricsSpecification:;
@end
