@interface IGListAdapterUpdater : NSObject
@property (nonatomic) NSArray fromObjects;
@property (nonatomic) @? toObjectsBlock;
@property (nonatomic) NSArray pendingTransitionToObjects;
@property (nonatomic) NSMutableArray completionBlocks;
@property (nonatomic) BOOL queuedUpdateIsAnimated;
@property (nonatomic) IGListBatchUpdates batchUpdates;
@property (nonatomic) @? objectTransitionBlock;
@property (nonatomic) @? reloadUpdates;
@property (nonatomic) BOOL queuedReloadData;
@property (nonatomic) q state;
@property (nonatomic) IGListBatchUpdateData applyingUpdateData;
@property (nonatomic) <IGListAdapterUpdaterDelegate> delegate;
@property (nonatomic) BOOL movesAsDeletesInserts;
@property (nonatomic) BOOL allowsBackgroundReloading;
@property (nonatomic) double coalescanceTime;
@property (nonatomic) q experiments;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_queueUpdateWithCollectionView:;
- (double)coalescanceTime;
- (void)setFromObjects:;
- (void)_beginPerformBatchUpdatesToObjects:;
- (void)_cleanStateAfterUpdates;
- (id)_flushCollectionView:withDiffResult:batchUpdates:fromObjects:;
- (void)_performBatchUpdatesItemBlockApplied;
- (BOOL)allowsBackgroundReloading;
- (id)applyingUpdateData;
- (id)batchUpdates;
- (void)cleanStateBeforeUpdates;
- (id)debugDescriptionLines;
- (void)deleteItemsFromCollectionView:indexPaths:;
- (id)fromObjects;
- (BOOL)hasQueuedReloadData;
- (void)insertItemsIntoCollectionView:indexPaths:;
- (void)moveItemInCollectionView:fromIndexPath:toIndexPath:;
- (void)moveSectionInCollectionView:fromIndex:toIndex:;
- (BOOL)movesAsDeletesInserts;
- (id)objectLookupPointerFunctions;
- (id)objectTransitionBlock;
- (id)pendingTransitionToObjects;
- (void)performBatchUpdatesWithCollectionView:;
- (void)performReloadDataWithCollectionView:;
- (void)performUpdateWithCollectionView:animated:itemUpdates:completion:;
- (void)performUpdateWithCollectionView:fromObjects:toObjectsBlock:animated:objectTransitionBlock:completion:;
- (BOOL)queuedUpdateIsAnimated;
- (void)reloadCollectionView:sections:;
- (void)reloadDataWithCollectionView:reloadUpdateBlock:completion:;
- (void)reloadItemInCollectionView:fromIndexPath:toIndexPath:;
- (id)reloadUpdates;
- (void)setAllowsBackgroundReloading:;
- (void)setApplyingUpdateData:;
- (void)setBatchUpdates:;
- (void)setCoalescanceTime:;
- (void)setMovesAsDeletesInserts:;
- (void)setObjectTransitionBlock:;
- (void)setPendingTransitionToObjects:;
- (void)setQueuedReloadData:;
- (void)setQueuedUpdateIsAnimated:;
- (void)setReloadUpdates:;
- (void)setToObjectsBlock:;
- (id)toObjectsBlock;
- (BOOL)hasChanges;
- (id)completionBlocks;
- (id)init;
- (void)setExperiments:;
- (void)setState:;
- (void)setDelegate:;
- (void)setCompletionBlocks:;
- (long long)state;
- (id)delegate;
- (void).cxx_destruct;
- (long long)experiments;
@end
