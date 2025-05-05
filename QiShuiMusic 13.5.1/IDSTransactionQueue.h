@interface IDSTransactionQueue : NSObject
@property (nonatomic) NSMutableArray transactions;
@property (nonatomic) {os_unfair_lock_s=I} lock;
- (id)init;
- (void)setTransactions:;
- (void)appendItem:;
- (id)transactions;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (void)prependItem:;
- (id)appendPendingItem:;
- (void)_prependTransaction:;
- (void)_appendTransaction:;
- (void)_readyTransaction:;
- (void)_removeTransaction:;
- (void)executeReadyItemsWithBlock:;
@end
