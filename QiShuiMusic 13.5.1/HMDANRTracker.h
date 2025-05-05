@interface HMDANRTracker : HMDTracker
@property (nonatomic) Q uploadCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cleanupExceptionDataWithConfig:;
- (id)dealNotDebugRealPerformanceData;
- (long long)dbMaxSize;
- (void)didBlockWithInfo:;
- (void)dropExceptionData;
- (BOOL)exceptionDataSource;
- (void)exceptionReporterDidReceiveResponse:;
- (id)getANRDataWithRecords:;
- (id)pendingDebugRealExceptionDataWithConfig:;
- (id)pendingExceptionData;
- (id)recordsFilteredByConditions:;
- (void)updateConfig:;
- (void)uploadANRLogIfNeeded;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (Class)storeClass;
- (void)setUploadCount:;
- (unsigned long long)uploadCount;
+ (id)sharedTracker;
@end
