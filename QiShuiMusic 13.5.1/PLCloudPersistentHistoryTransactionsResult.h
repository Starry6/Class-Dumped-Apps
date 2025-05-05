@interface PLCloudPersistentHistoryTransactionsResult : NSObject
@property (nonatomic) q resultType;
@property (nonatomic) NSString currentTokenDescription;
@property (nonatomic) NSPersistentHistoryToken lastProcessedCoreDataToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sendLocalEvent:toEnumerationBlock:;
- (id)initWithUnsuccessfulResultType:;
- (id)initWithSuccesfulTransactionIterator:;
- (id)localEventForAllTransactions;
- (long long)resultType;
- (void)enumerateLocalEventsWithBlock:;
- (void).cxx_destruct;
- (id)currentTokenDescription;
- (void)updateLastProcessedCoreDataToken;
- (id)lastProcessedCoreDataToken;
- (id)initWithResultType:transactionIterator:;
+ (id)fetchTransactionsSinceToken:inContext:;
+ (id)isTransactionSyncableFilter;
@end
