@interface PIANSRManager : NSObject
@property (nonatomic) NSRecursiveLock locker;
@property (nonatomic) NSMutableDictionary NSRList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)NSRList;
- (id)NSRContentForURL:;
- (void)PIAWorker:didExecuteScriptURL:executeMetrics:;
- (void)PIAWorker:didReceiveError:;
- (BOOL)NSRExistForURL:;
- (void)NSRTimeOut:;
- (void)PIAWorker:didFetchScriptURL:fetchMetrics:error:;
- (void)clearAllNSRContent;
- (BOOL)clearNSRContentForURL:;
- (void)executeNSRWithURL:configuration:;
- (id)findModelForURL:;
- (void)handleMemoryWarning;
- (id)locker;
- (void)reportNSRWorkerPerformance:worker:;
- (void)setLocker:;
- (void)setNSRList:;
- (void)storeNSRContent:URL:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
