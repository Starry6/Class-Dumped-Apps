@interface AWEEnergyMonitorDataSourceManager : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) NSMutableSet dataSources;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
- (id)getBatteryExtraInfoFromDataSource;
- (id)getCPUExtraInfoFromDataSource;
- (void)addDataSource:;
- (BOOL)enable;
- (void)removeDataSource:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
- (void)setDataSources:;
- (id)dataSources;
- (void)setEnable:;
+ (id)shared;
@end
