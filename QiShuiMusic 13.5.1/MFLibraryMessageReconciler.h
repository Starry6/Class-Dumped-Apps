@interface MFLibraryMessageReconciler : NSObject
@property (nonatomic) Q numberOfUnreconciledMessages;
- (unsigned long long)numberOfUnreconciledMessages;
- (id)reconcileWithThreadReconciliationQueries:window:;
- (id)reconcileWithMessageReconciliationQueries:window:;
- (id)reconcileInboxMessagesWithWindow:;
- (id)initWithLibrary:accountsProvider:;
- (void)reconcileAllObjectsWithWindow:;
- (void).cxx_destruct;
@end
