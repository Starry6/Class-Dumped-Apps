@interface MTPerfKit : MTMetricsKitTemplate
- (void).cxx_destruct;
- (id)initWithTopic:;
- (id)sampling;
- (id)pageRenderMeasurementWithPageId:pageType:pageContext:;
- (id)pageRenderMeasurementWithPageId:pageType:pageContext:eventData:;
- (id)loadUrlMeasurement;
- (id)loadUrlMeasurementWithEventData:;
- (id)flexibleMeasurementWithEventType:;
- (id)flexibleMeasurementWithEventType:eventData:;
@end
