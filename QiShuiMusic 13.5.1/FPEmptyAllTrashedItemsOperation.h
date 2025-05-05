@interface FPEmptyAllTrashedItemsOperation : FPActionOperation
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dataForCollectionShouldBeReloaded:;
- (void)actionMain;
- (void)collection:didInsertItemsAtIndexPaths:;
- (void)collection:didMoveItemsFromIndexPaths:toIndexPaths:;
- (void)collection:didDeleteItemsAtIndexPaths:;
- (void)collection:didUpdateItemsAtIndexPaths:changes:;
- (void)collection:didPerformBatchUpdateWithReplayBlock:;
@end
