@interface ML3DatabaseImportManager : NSObject
@property (nonatomic) NSError lastImportError;
@property (nonatomic) Q operationsCount;
@property (nonatomic) Q suspendedOperationsCount;
@property (nonatomic) BOOL suspended;
- (id)init;
- (BOOL)isSuspended;
- (void).cxx_destruct;
- (id)_importOperations;
- (unsigned long long)operationsCount;
- (unsigned long long)suspendedOperationsCount;
- (void)performImport:fromSource:progressBlock:withCompletionHandler:;
- (float)currentOperationProgressWithError:;
- (void)cancelAllImportOperations;
- (void)cancelImportOperationsOriginatingFromClient:;
- (void)cancelImportOperationsForSource:withCompletionHandler:;
- (void)suspendImportOperations;
- (void)resumeSuspendedImportOperations;
- (id)_suspendedImportOperations;
- (void)_handleImportOperationCompleted:;
- (void)_handleImportOperationCancelled:;
- (id)lastImportError;
- (void)setLastImportError:;
@end
