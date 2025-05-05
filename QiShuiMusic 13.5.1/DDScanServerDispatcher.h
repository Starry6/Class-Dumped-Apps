@interface DDScanServerDispatcher : NSObject
- (id)init;
- (void)dealloc;
- (id)scannerListForConfiguration:;
- (void)recycleScanner:fromList:sameQueue:;
- (void)cancelJob:;
- (BOOL)reachedMaxSimultaneousTask;
- (id)reportQueue;
- (long long)emptyIdentifier;
- (void).cxx_destruct;
- (long long)scannerConf:sync:shortTask:runTask:;
@end
