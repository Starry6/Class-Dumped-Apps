@interface HMDControllerTimeManager : HeimdallrModule
@property (nonatomic) {HMDRecordLocalIDRange=QQ} uploadingRange;
@property (nonatomic) q hmdCountLimit;
@property (nonatomic) NSArray andConditions;
@property (nonatomic) double lastFlushTimestamp;
@property (nonatomic) NSMutableArray recordsArray;
@property (nonatomic) NSObject<OS_dispatch_queue> syncQueue;
@property (nonatomic) {HMDRecordLocalIDRange=QQ} uploadingRange;
@property (nonatomic) q hmdCountLimit;
@property (nonatomic) NSArray andConditions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)andConditions;
- (void)cleanupNotUploadAndReportedPerformanceData;
- (void)cleanupPerformanceDataWithConfig:;
- (void)cleanupWithConfig:;
- (void)clearRecordsArray;
- (long long)dbMaxSize;
- (id)debugRealPerformanceDataWithConfig:;
- (void)dropAllDataForServerState;
- (id)fetchUploadRecords;
- (id)getAggregateDataWithRecords:;
- (id)getDataWithRecords:;
- (void)hmdControllerName:typeName:timeInterval:isFirstOpen:;
- (long long)hmdCountLimit;
- (double)lastFlushTimestamp;
- (void)performanceDataDidReportSuccess:;
- (void)performanceDataSaveImmediately;
- (BOOL)performanceDataSource;
- (id)performanceDataWithCountLimit:;
- (id)performanceDataWithLimitSize:limitCount:currentSize:;
- (void)performanceSizeLimitedDataDidReportSuccess:;
- (id)recordsArray;
- (unsigned long long)reporterPriority;
- (void)setAndConditions:;
- (void)setHmdCountLimit:;
- (void)setLastFlushTimestamp:;
- (void)setRecordsArray:;
- (void)setUploadingRange:;
- (void)setupWithHeimdallr:;
- (void)tracksCountChangedWithImmediately:;
- (void)updateConfig:;
- (id)uploadingRange;
- (id)syncQueue;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)setSyncQueue:;
- (void).cxx_destruct;
- (Class)storeClass;
- (void)applicationWillEnterBackground:;
+ (id)allocWithZone:;
+ (id)sharedInstance;
@end
