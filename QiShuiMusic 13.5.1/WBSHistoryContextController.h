@interface WBSHistoryContextController : NSObject
@property (nonatomic) WBSHistory history;
- (id)history;
- (void).cxx_destruct;
- (id)initWithHistory:contextClient:qualityOfService:;
- (id)initWithHistory:contextClient:;
- (void)cachedResponseForURL:completionHandler:;
- (void)invalidateCachedResults;
- (void)contextForPageURL:content:contentType:metadata:isPrivate:isReaderAvailable:withCompletionHandler:;
- (void)_persistTopicsFromContextResult:forPageURL:;
@end
