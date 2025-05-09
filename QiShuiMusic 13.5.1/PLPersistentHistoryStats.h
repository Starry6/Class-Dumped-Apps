@interface PLPersistentHistoryStats : NSObject
@property (nonatomic) q filePageCount;
@property (nonatomic) q unusedPageCount;
@property (nonatomic) q payloadPageCount;
@property (nonatomic) q transactionsPageCount;
@property (nonatomic) q transactionStringsPageCount;
@property (nonatomic) q changesPageCount;
@property (nonatomic) q persistentHistoryPageCount;
@property (nonatomic) q transactionCount;
@property (nonatomic) NSDate earliestTransactionDate;
@property (nonatomic) q daysSinceEarliestTransaction;
@property (nonatomic) double transactionsPageCountPercent;
@property (nonatomic) double transactionStringsPageCountPercent;
@property (nonatomic) double changesPageCountPercent;
@property (nonatomic) double persistentHistoryPageCountPercent;
@property (nonatomic) double transactionsPageCountPercentOfPayload;
@property (nonatomic) double transactionStringsPageCountPercentOfPayload;
@property (nonatomic) double changesPageCountPercentOfPayload;
@property (nonatomic) double persistentHistoryPageCountPercentOfPayload;
- (long long)transactionCount;
- (void)setTransactionCount:;
- (void).cxx_destruct;
- (long long)payloadPageCount;
- (long long)persistentHistoryPageCount;
- (long long)daysSinceEarliestTransaction;
- (double)transactionsPageCountPercent;
- (double)transactionStringsPageCountPercent;
- (double)changesPageCountPercent;
- (double)persistentHistoryPageCountPercent;
- (double)_pageCountAsPercentOfFile:;
- (double)transactionsPageCountPercentOfPayload;
- (double)transactionStringsPageCountPercentOfPayload;
- (double)changesPageCountPercentOfPayload;
- (double)persistentHistoryPageCountPercentOfPayload;
- (double)_pageCountAsPercentOfPayload:;
- (long long)filePageCount;
- (void)setFilePageCount:;
- (long long)unusedPageCount;
- (void)setUnusedPageCount:;
- (long long)transactionsPageCount;
- (void)setTransactionsPageCount:;
- (long long)transactionStringsPageCount;
- (void)setTransactionStringsPageCount:;
- (long long)changesPageCount;
- (void)setChangesPageCount:;
- (id)earliestTransactionDate;
- (void)setEarliestTransactionDate:;
+ (id)statsFromDatabase:;
+ (BOOL)fetchPageCountsOfPersistentHistoryTablesFromDatabase:intoStats:;
+ (BOOL)fetchTotalPageCountFromDatabase:intoStats:;
+ (BOOL)fetchUnusedPageCountFromDatabase:intoStats:;
+ (BOOL)fetchTransactionCountFromDatabase:intoStats:;
+ (BOOL)fetchEarliestTransactionDateFromDatabase:intoStats:;
@end
