@interface BRItemCollectionGatherer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)stop;
- (void).cxx_destruct;
- (void)invalidate;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)dataForCollectionShouldBeReloaded:;
- (void)collectionDidFinishGathering:;
- (void)collection:didUpdateItems:replaceItemsByFormerID:deleteItemsWithIDs:;
- (void)_addItemCollectionOnObject:;
- (BOOL)_canWatchItem:;
- (BOOL)_buildCollectionsOnItem:;
- (id)initWithDelegate:query:;
- (void)_startWatchingURLsIfNeeded:;
- (void)_startWatchingAppLibrariesIfNeeded:;
- (void)startWatchingRootItemWithScopes:;
- (void)_startWatchingNewSubItem:;
- (void)_stopWatchingItemIDRecusively:;
@end
