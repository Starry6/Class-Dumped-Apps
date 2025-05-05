@interface PLPersistentHistoryTransactionIterator : NSObject
@property (nonatomic) Q count;
@property (nonatomic) NSManagedObjectContext context;
@property (nonatomic) NSPersistentHistoryToken lastIteratedToken;
@property (nonatomic) NSMutableDictionary userInfo;
- (id)userInfo;
- (id)context;
- (id)initWithTransactions:managedObjectObjectContext:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (void)enumerateRemainingTransactionsWithBlock:;
- (id)lastIteratedToken;
- (id)_safeTransactionAtIndex:;
- (unsigned long long)count;
- (BOOL)enumerateOneTransactionWithBlock:;
- (BOOL)hasMoreTransactions;
+ (id)iteratorSinceMarker:withFetchRequest:managedObjectObjectContext:error:;
+ (id)iteratorSinceToken:withManagedObjectObjectContext:error:;
@end
