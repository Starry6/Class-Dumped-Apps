@interface TTVideoEngineBatteryMonitor : NSObject
@property (nonatomic) TTVideoEngineMetricBattery metricInfoBattery;
@property (nonatomic) BOOL isStart;
@property (nonatomic) NSMutableDictionary reportMetric;
- (int)diagnoseBattery;
- (void)addNotification;
- (int)diagnoseThermal;
- (void)batteryStateChange;
- (double)getCurCriticalTime;
- (double)getCurSeriousTime;
- (id)getDiagnoseReport;
- (id)metricInfoBattery;
- (void)removeNotification;
- (id)reportMetric;
- (void)setMetricInfoBattery:;
- (void)setReportMetric:;
- (void)thermalChange;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)setIsStart:;
- (BOOL)isStart;
- (void).cxx_destruct;
@end
