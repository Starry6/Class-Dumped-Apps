@interface CKDatabaseImplementation : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> underlyingDispatchQueue;
@property (nonatomic) q databaseScope;
@property (nonatomic) CKContainerImplementation containerImplementation;
@property (nonatomic) q scope;
@property (nonatomic) NSOperationQueue operationQueue;
- (long long)databaseScope;
- (void)clearAssetCache;
- (void)showAssetCache;
- (long long)scope;
- (void)clearAuthTokensForRecordWithID:;
- (id)containerImplementation;
- (id)_initWithContainerImplementation:scope:;
- (id)underlyingDispatchQueue;
- (id)CKStatusReportArray;
- (void)setContainerImplementation:;
- (id)operationQueue;
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;
- (void)deleteSubscriptionWithID:wrappingDatabase:convenienceConfiguration:completionHandler:;
- (void)clearRecordCache;
- (void)deleteRecordWithID:wrappingDatabase:convenienceConfiguration:completionHandler:;
- (void)saveSubscription:wrappingDatabase:convenienceConfiguration:completionHandler:;
- (id)CKPropertiesDescription;
- (void)saveRecordZone:wrappingDatabase:convenienceConfiguration:completionHandler:;
- (void)clearCacheEntriesForZone:completionHandler:;
- (void)fetchPCSFromCacheForZoneWithID:completionHandler:;
- (void).cxx_destruct;
- (void)deleteRecordZoneWithID:wrappingDatabase:convenienceConfiguration:completionHandler:;
- (void)clearCacheEntriesForRecord:completionHandler:;
- (id)description;
- (void)_scheduleConvenienceOperation:wrappingDatabase:convenienceConfiguration:;
- (void)fetchAllRecordZonesWithWrappingDatabase:convenienceConfiguration:completionHandler:;
- (void)clearCachesWithOptions:completionHandler:;
- (void)addOperation:wrappingDatabase:convenienceConfiguration:;
- (void)fetchAllSubscriptionsWithWrappingDatabase:convenienceConfiguration:completionHandler:;
- (void)getCorruptRecordsForAllZonesWithCompletionHandler:;
- (void)fetchRecordZoneWithID:wrappingDatabase:convenienceConfiguration:completionHandler:;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:;
- (void)setUnderlyingDispatchQueue:;
- (void)fetchRecordWithID:wrappingDatabase:convenienceConfiguration:completionHandler:;
- (void)saveRecord:wrappingDatabase:convenienceConfiguration:completionHandler:;
- (void)fetchSubscriptionWithID:wrappingDatabase:convenienceConfiguration:completionHandler:;
- (void)_addOperation:wrappingDatabase:convenienceConfiguration:isConvenience:;
- (void)performQuery:inZoneWithID:wrappingDatabase:convenienceConfiguration:completionHandler:;
- (unsigned long long)countAssetCacheItems;
@end
