@interface IESSaaSTIMDatabaseStatistical : NSObject
@property (nonatomic) NSMutableArray statisData;
@property (nonatomic) NSObject<OS_dispatch_queue> statisticalQueue;
@property (nonatomic) BOOL isStart;
- (void)clientMetricDB:timeConsuming:methodsName:;
- (void)clientMetricWSSendMsg:tagDic:;
- (void)metricBatchedUpload:;
- (BOOL)satisfyReport:;
- (void)setStatisData:;
- (void)setStatisticalQueue:;
- (id)statisData;
- (id)statisticalQueue;
- (void)timerCalculate;
- (id)init;
- (void)setIsStart:;
- (BOOL)isStart;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
