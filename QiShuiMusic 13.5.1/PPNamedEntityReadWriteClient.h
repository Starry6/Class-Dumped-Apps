@interface PPNamedEntityReadWriteClient : NSObject
- (id)init;
- (BOOL)donateLocationNamedEntities:bundleId:groupId:error:;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:documentIds:deletedCount:error:;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:groupIds:deletedCount:error:;
- (BOOL)cloudSyncWithError:;
- (BOOL)donateMapItem:forPlaceName:error:;
- (void).cxx_destruct;
- (BOOL)flushDonationsWithError:;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:;
- (BOOL)donateNamedEntities:source:algorithm:cloudSync:sentimentScore:error:;
- (BOOL)clearWithError:deletedCount:;
- (BOOL)removeMapItemForPlaceName:error:;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:deletedCount:error:;
- (BOOL)_doSyncCallWithError:syncCall:;
- (BOOL)_doDeletionSyncCallWithError:deletedCount:syncCall:;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:groupId:olderThanDate:deletedCount:error:;
- (BOOL)removeMapItemsBeforeDate:error:;
+ (id)sharedInstance;
@end
