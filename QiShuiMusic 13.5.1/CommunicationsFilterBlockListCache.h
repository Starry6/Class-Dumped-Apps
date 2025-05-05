@interface CommunicationsFilterBlockListCache : NSObject
- (id)init;
- (void)_blockListChanged:;
- (void)removeItemFromCache:;
- (long long)cachedResponseForItem:;
- (void)setResponse:forItem:;
- (void)syncListEmptyState;
@end
