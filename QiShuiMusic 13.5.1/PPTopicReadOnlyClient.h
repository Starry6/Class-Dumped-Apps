@interface PPTopicReadOnlyClient : NSObject
- (id)init;
- (id)unmapMappedTopicIdentifier:mappingIdentifier:error:;
- (void)topicRecordBatch:isLast:error:queryId:completion:;
- (BOOL)scoresForTopicMapping:query:error:handleBatch:;
- (void)registerFeedback:completion:;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (void).cxx_destruct;
- (BOOL)topicExtractionsFromText:error:handleBatch:;
- (void)topicExtractionsFromTextBatch:isLast:error:queryId:completion:;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:;
- (void)topicBatch:isLast:error:queryId:completion:;
- (void)scoredMappedTopicBatch:isLast:error:queryId:completion:;
- (BOOL)rankedTopicsWithQuery:error:handleBatch:;
- (BOOL)topicRecordsWithQuery:error:handleBatch:;
- (id)topicCacheSandboxExtensionToken:;
- (void)registerUniversalSearchSpotlightFeedback:completion:;
- (id)cachePath:;
+ (id)sharedInstance;
@end
