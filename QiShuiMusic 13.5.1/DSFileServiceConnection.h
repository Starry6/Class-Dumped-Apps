@interface DSFileServiceConnection : NSObject
@property (nonatomic) @? didUpdateInProgressOperationsHandler;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)requestInProgressOperationsWithResponseBlock:;
- (BOOL)_addOperationForProgress:;
- (void)_removeOperationForProgress:;
- (void)_subscribeToProgressIfNeeded:;
- (void)_triggerReloadCurrentOperations;
- (void)_reloadCurrentOperations;
- (id)didUpdateInProgressOperationsHandler;
- (void)setDidUpdateInProgressOperationsHandler:;
@end
