@interface NSPersistentHistoryChangeRequest : NSPersistentStoreRequest
@property (nonatomic) q resultType;
@property (nonatomic) NSPersistentHistoryToken token;
@property (nonatomic) NSFetchRequest fetchRequest;
- (unsigned long long)requestType;
- (void)setFetchLimit:;
- (unsigned long long)fetchOffset;
- (unsigned long long)fetchLimit;
- (id)propertiesToFetch;
- (void)setFetchBatchSize:;
- (unsigned long long)fetchBatchSize;
- (BOOL)includesSubentities;
- (id)encodeForXPC;
- (BOOL)isDelete;
- (void)setFetchOffset:;
- (id)init;
- (void)dealloc;
- (id)token;
- (id)initWithToken:delete:percentageOfDB:;
- (id)propertiesToFetchForEntity:includeTransactionStrings:;
- (unsigned long long)percentageOfDB;
- (id)initWithTransactionID:delete:transactionOnly:percentageOfDB:;
- (BOOL)useQueryGenerationToken;
- (id)initWithToken:;
- (void)setResultType:;
- (id)transactionNumber;
- (id)initWithDate:;
- (BOOL)isFetchTransactionForToken;
- (id)initWithTransactionToken:;
- (id)debugDescription;
- (long long)resultType;
- (id)date;
- (id)predicate;
- (BOOL)isPercentageDelete;
- (void)setFetchRequest:;
- (id)transactionIDs;
- (id)initWithDate:delete:percentageOfDB:;
- (id)predicateForStoreIdentifier:;
- (id)initWithDate:delete:;
- (id)initWithToken:delete:;
- (id)initWithTransactionIDs:;
- (id)description;
- (id)entityNameToFetch;
- (void)setUseQueryGenerationToken:;
- (id)initWithFetchRequest:;
- (id)fetchRequest;
- (id)propertiesToFetchForEntity:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)decodeFromXPCArchive:withContext:withPolicy:;
+ (id)fetchHistoryWithFetchRequest:;
+ (id)deleteHistoryBeforeDate:whenHistoryPercentageOfStoreIsGreaterThan:;
+ (id)fetchHistoryAfterToken:;
+ (id)deleteHistoryBeforeToken:;
+ (id)deleteHistoryBeforeTransaction:;
+ (id)fetchHistoryTransactionForToken:;
+ (id)fetchHistoryAfterDate:;
+ (id)fetchHistoryAfterTransaction:;
+ (id)deleteHistoryBeforeToken:whenHistoryPercentageOfStoreIsGreaterThan:;
+ (id)deleteHistoryBeforeDate:;
+ (id)_stringForHistoryRequestResultType:;
@end
