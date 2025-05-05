@interface FPSpotlightFetchOneBatchFromWorkingSetOperation : FPOperation
@property (nonatomic) NSArray updatedItems;
@property (nonatomic) NSArray deletedItemIDs;
@property (nonatomic) NSData nextAnchor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSError error;
- (id)nextAnchor;
- (void)setNextAnchor:;
- (void)setUpdatedItems:;
- (void)setError:;
- (id)updatedItems;
- (id)observerItemID;
- (void)setHasMore:;
- (void)_indexOneChangesBatchFromChangeToken:;
- (id)error;
- (id)deletedItemIDs;
- (void)main;
- (id)initWithIndexer:queue:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (void)handleInsertedItems:deletedItems:needsMoreWork:state:error:;
- (void)_indexOnePageFromPage:;
- (void)setDeletedItemIDs:;
@end
