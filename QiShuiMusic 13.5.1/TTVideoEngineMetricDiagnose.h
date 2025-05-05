@interface TTVideoEngineMetricDiagnose : NSObject
@property (nonatomic) NSMutableArray metricInfoQueue;
@property (nonatomic) q interval;
@property (nonatomic) NSMutableDictionary reportMetric;
- (id)metricInfoQueue;
- (void)collectMetricInfo:;
- (id)diagnoseCpu:;
- (id)diagnoseGpu:;
- (id)diagnoseMem:;
- (id)getDiagnoseReport;
- (id)reportMetric;
- (void)setCollectInterval:;
- (void)setMetricInfoQueue:;
- (void)setReportMetric:;
- (id)init;
- (void)diagnose;
- (void)setup;
- (void)setInterval:;
- (void).cxx_destruct;
- (long long)interval;
@end
