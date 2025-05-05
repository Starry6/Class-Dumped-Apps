@interface HMDLaunchDataCollector : NSObject
@property (nonatomic) HMDLaunchTraceTimingInfo trace;
@property (nonatomic) NSDictionary perfData;
@property (nonatomic) NSMutableDictionary perf;
@property (nonatomic) <HMDLaunchDataCollectorDelegate> datasource;
- (void)insertNormalPerfData:;
- (void)insertOnceCompleteTrace:;
- (id)perf;
- (id)perfData;
- (void)recordOnceLaunchData;
- (void)setPerfData:;
- (void)setTrace:;
- (id)init;
- (void).cxx_destruct;
- (id)trace;
- (id)datasource;
- (void)setDatasource:;
@end
