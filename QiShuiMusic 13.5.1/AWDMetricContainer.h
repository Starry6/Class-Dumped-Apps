@interface AWDMetricContainer : NSObject
@property (nonatomic) PBCodable metric;
@property (nonatomic) I metricId;
- (id)initWithMetricId:;
- (void).cxx_destruct;
- (void)setMetric:;
- (id)metric;
- (unsigned int)metricId;
@end
