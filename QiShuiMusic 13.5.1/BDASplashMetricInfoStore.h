@interface BDASplashMetricInfoStore : NSObject
@property (nonatomic) NSMutableArray metricInfo;
@property (nonatomic) NSLock metricInfoLock;
- (void)clearMetricInfo;
- (id)metricInfoLock;
- (id)metricInfoStr;
- (void)setMetricInfoLock:;
- (void)storeInfoWithAdId:errorCode:;
- (id)init;
- (id)initPrivate;
- (void)setMetricInfo:;
- (void).cxx_destruct;
- (id)metricInfo;
+ (id)shareInstance;
@end
