@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext
@property (nonatomic) NSPersistentHistoryChangeRequest request;
@property (nonatomic) BOOL shouldUseBatches;
- (void)dealloc;
- (id)fetchRequestContextForChanges;
- (void)executePrologue;
- (id)request;
- (BOOL)shouldUseBatches;
- (id)createCountRequestContextForChanges;
- (BOOL)executeRequestUsingConnection:;
- (id)createRequestContextForChangesWithTransactionIDs:;
- (BOOL)isWritingRequest;
- (id)initWithRequest:context:sqlCore:;
- (id)createDeleteTransactionsRequestContext;
@end
