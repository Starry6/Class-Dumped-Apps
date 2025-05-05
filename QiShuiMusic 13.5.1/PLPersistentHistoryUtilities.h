@interface PLPersistentHistoryUtilities : NSObject
+ (id)oldestTransactionWithContext:;
+ (id)fetchTransactionsSinceMarker:withFetchRequest:batchSize:context:error:;
+ (id)_executePersistentHistoryChangeRequest:withContext:;
+ (id)unarchiveTokenWithData:;
+ (BOOL)deleteHistoryBeforeDate:whenHistoryPercentageOfStoreIsGreaterThan:withContext:error:;
+ (long long)fetchApproximateHistoryRecordCountInLibrary:error:;
+ (id)fetchTransactionCountSinceToken:withContext:error:;
+ (BOOL)deleteHistoryBeforeDate:withContext:error:;
+ (id)newestTransactionWithContext:;
+ (id)archivedDataWithToken:;
+ (BOOL)deleteHistoryBeforeToken:withContext:error:;
@end
