@interface TTVideoEngineMetricInfo : NSObject
@property (nonatomic) TTVideoEngineMetricCPU metricInfoCPU;
@property (nonatomic) TTVideoEngineMetricMemory metricInfoMemory;
@property (nonatomic) TTVideoEngineMetricFlow metricInfoFlow;
@property (nonatomic) TTVideoEngineMetricGPU metricInfoGPU;
@property (nonatomic) TTVideoEngineMetricDisk metricInfoDisk;
- (id)metricInfoCPU;
- (id)metricInfoDisk;
- (id)metricInfoFlow;
- (id)metricInfoGPU;
- (id)metricInfoMemory;
- (void)setMetricInfoCPU:;
- (void)setMetricInfoDisk:;
- (void)setMetricInfoFlow:;
- (void)setMetricInfoGPU:;
- (void)setMetricInfoMemory:;
- (void).cxx_destruct;
@end
