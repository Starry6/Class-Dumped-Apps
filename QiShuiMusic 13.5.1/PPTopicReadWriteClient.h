@interface PPTopicReadWriteClient : NSObject
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:deletedCount:error:;
- (id)init;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:documentIds:deletedCount:error:;
- (BOOL)cloudSyncWithError:;
- (BOOL)donateTopics:source:algorithm:cloudSync:sentimentScore:exactMatchesInSourceText:error:;
- (BOOL)computeAndCacheTopicScores:;
- (void).cxx_destruct;
- (BOOL)deleteAllTopicsWithTopicId:deletedCount:error:;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:groupIds:deletedCount:error:;
- (BOOL)clearWithError:deletedCount:;
- (BOOL)_doSyncCallWithError:syncCall:;
- (BOOL)_doDeletionSyncCallWithError:deletedCount:syncCall:;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:groupId:olderThanDate:deletedCount:error:;
+ (id)sharedInstance;
@end
