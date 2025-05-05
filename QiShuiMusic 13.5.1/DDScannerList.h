@interface DDScannerList : NSObject
- (id)dequeueJob;
- (BOOL)cancelJob:;
- (unsigned long long)busyCount;
- (unsigned long long)totalCount;
- (id)getCachedScanner;
- (void).cxx_destruct;
- (void)activateScanner:;
- (void)pushBackScanner:;
- (void)enqueueJob:withIdentifier:;
- (id)initWithConfiguration:;
- (id)scannerCreate;
@end
