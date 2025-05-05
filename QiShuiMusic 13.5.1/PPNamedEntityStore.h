@interface PPNamedEntityStore : NSObject
@property (nonatomic) NSString clientIdentifier;
- (id)_initFromSubclass;
- (id)init;
- (BOOL)donateLocationNamedEntities:bundleId:groupId:error:;
- (id)rankedNamedEntitiesWithQuery:error:;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:documentIds:deletedCount:error:;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:groupIds:deletedCount:error:;
- (BOOL)cloudSyncWithError:;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:groupId:olderThan:deletedCount:error:;
- (void)registerFeedback:completion:;
- (id)namedEntityRecordsWithQuery:error:;
- (BOOL)donateMapItem:forPlaceName:error:;
- (BOOL)loadNamedEntityRecordsAndMonitorChangesWithDelegate:error:;
- (BOOL)iterNamedEntityRecordsWithQuery:error:block:;
- (BOOL)flushDonationsWithError:;
- (void)setClientIdentifier:;
- (id)mapItemForPlaceName:error:;
- (BOOL)iterRankedNamedEntitiesWithQuery:error:block:;
- (BOOL)donateNamedEntities:source:algorithm:cloudSync:sentimentScore:error:;
- (BOOL)removeMapItemsBeforeCutoffDate:error:;
- (BOOL)clearWithError:deletedCount:;
- (id)clientIdentifier;
- (BOOL)removeMapItemForPlaceName:error:;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:deletedCount:error:;
+ (id)new;
+ (id)defaultStore;
@end
