@interface FBSynchronizedTransactionGroup : FBTransaction
@property (nonatomic) <FBSynchronizedTransactionDelegate> synchronizationDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)synchronizedTransactionReadyToCommit:;
- (void)_performSynchronizedCommitIfReady;
- (void)_childTransactionDidComplete:;
- (void)_didComplete;
- (void)_performSynchronizedCommit:;
- (void)synchronizedTransaction:willCommitSynchronizedTransactions:;
- (void)synchronizedTransaction:didCommitSynchronizedTransactions:;
- (id)synchronizedTransactions;
- (void)setSynchronizationDelegate:;
- (BOOL)_shouldFailForChildTransaction:;
- (id)init;
- (BOOL)_canBeInterrupted;
- (BOOL)isReadyForSynchronizedCommit;
- (void)_checkPreconditionsAndCommitIfReady;
- (void).cxx_destruct;
- (void)addSynchronizedTransaction:;
- (id)synchronizationDelegate;
- (void)performSynchronizedCommit;
@end
