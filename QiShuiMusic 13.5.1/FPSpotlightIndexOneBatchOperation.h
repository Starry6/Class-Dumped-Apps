@interface FPSpotlightIndexOneBatchOperation : FPOperation
@property (nonatomic) NSArray updatedItems;
@property (nonatomic) NSArray deletedItemIDs;
@property (nonatomic) NSData nextAnchor;
@property (nonatomic) NSError fetchError;
@property (nonatomic) @? canIndexFromCurrentState;
- (id)nextAnchor;
- (void)setNextAnchor:;
- (void)setUpdatedItems:;
- (id)initWithIndexer:isInitialIndexing:isOutOfBandIndexing:queue:;
- (id)updatedItems;
- (id)deletedItemIDs;
- (id)fetchError;
- (id)canIndexFromCurrentState;
- (void)main;
- (void).cxx_destruct;
- (void)setFetchError:;
- (void)finishWithResult:error:;
- (void)setDeletedItemIDs:;
- (void)setCanIndexFromCurrentState:;
@end
