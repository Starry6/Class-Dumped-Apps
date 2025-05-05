@interface AMapNetworkPerformanceModel : AMapNetworkMonitorModel
@property (nonatomic) NSString serverTime;
@property (nonatomic) NSString exceptSize;
- (id)exceptSize;
- (id)initSucModelWithTransactionMetrics:serverTime:dataSize:;
- (BOOL)isFail;
- (id)modelIdentifer;
- (id)offline_datazize;
- (id)realTimeHeader;
- (void)setExceptSize:;
- (void)setServerTime:;
- (void).cxx_destruct;
- (id)description;
- (id)serverTime;
@end
