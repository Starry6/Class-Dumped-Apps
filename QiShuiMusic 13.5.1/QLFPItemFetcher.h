@interface QLFPItemFetcher : QLUbiquitousItemFetcher
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)itemSize;
- (void).cxx_destruct;
- (id)fileURL;
- (void)dataForCollectionShouldBeReloaded:;
- (void)collection:didUpdateObservedItem:;
- (void)collection:didInsertItemsAtIndexPaths:;
- (void)collection:didMoveItemsFromIndexPaths:toIndexPaths:;
- (void)collection:didDeleteItemsAtIndexPaths:;
- (void)collection:didUpdateItemsAtIndexPaths:changes:;
- (void)collection:didPerformBatchUpdateWithReplayBlock:;
- (void)fetchContentWithAllowedOutputClasses:inQueue:updateBlock:completionBlock:;
- (BOOL)isLongFetchOperation;
- (id)shareableItem;
- (void)prepareShareableItem:;
- (id)initWithFPItem:shouldZipPackageIfNeeded:;
- (void)_registerItemCollectionIfNeeded;
- (void)_unregisterItemCollectionIfNeeded;
- (void)_urlHandler:;
+ (BOOL)supportsSecureCoding;
@end
