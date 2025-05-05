@interface WBSForYouTopicManager : NSObject
- (void).cxx_destruct;
- (id)initWithHistory:contextClient:;
- (void)_createInternalQueueIfNecessary;
- (void)contextKitTopicsWithCompletionHandler:;
- (void)portraitNamedEntitiesWithCompletionHandler:;
@end
