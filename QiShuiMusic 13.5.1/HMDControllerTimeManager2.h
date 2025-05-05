@interface HMDControllerTimeManager2 : HMDControllerTimeManager
@property (nonatomic) HMInstance instance;
- (void)cleanupNotUploadAndReportedPerformanceData;
- (void)clearRecordsArray;
- (void)dropAllDataForServerState;
- (void)hmdControllerName:typeName:timeInterval:isFirstOpen:;
- (void)performanceDataDidReportSuccess:;
- (void)performanceDataSaveImmediately;
- (id)performanceDataWithCountLimit:;
- (id)performanceDataWithLimitSize:limitCount:currentSize:;
- (void)performanceSizeLimitedDataDidReportSuccess:;
- (id)instance;
- (void)setInstance:;
- (void).cxx_destruct;
- (void)applicationWillEnterBackground:;
@end
