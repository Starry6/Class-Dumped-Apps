@interface FPDaemonOperationManager : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)wakeUp;
- (id)generateLocalOperationID;
- (void)_receiveLongLivedOperation:info:;
- (void)_updateDaemonOperations;
- (void)_enumerateNewDaemonOperationsWithHandler:;
+ (id)sharedInstance;
@end
