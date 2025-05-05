@interface SBSWidgetMetricsService : NSObject
@property (nonatomic) <SBSWidgetMetricsProviding> metricsProvider;
- (id)init;
- (void)dealloc;
- (id)previewMetricsSpecificationForDeviceContext:displayContext:bundleIdentifier:;
- (id)previewMetricsSpecificationForBundleIdentifier:;
- (void).cxx_destruct;
- (id)systemMetricsForWidget:;
- (id)metricsProvider;
- (id)initWithMetricsProvider:;
@end
