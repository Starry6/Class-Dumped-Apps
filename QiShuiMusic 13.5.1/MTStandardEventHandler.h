@interface MTStandardEventHandler : MTEventHandler
- (id)metricsDataWithPageId:pageType:pageContext:eventData:;
- (void)validatePageFieldValueWithMetricsData:;
@end
