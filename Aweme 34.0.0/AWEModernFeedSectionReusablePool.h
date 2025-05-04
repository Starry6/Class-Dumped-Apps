@interface AWEModernFeedSectionReusablePool : NSObject
@property (nonatomic) NSMutableDictionary pool;
@property (nonatomic) NSMutableDictionary indexLastType;
@property (nonatomic) NSMutableDictionary indexLastController;
@property (nonatomic) <AWEModernFeedCellManagerProtocol> cellManager;
- (id)cellManager;
- (void)setCellManager:;
- (id)sectionControllerForIndex:;
- (id)dequeueReusableSectionControllerForType:atIndex:forTableView:;
- (void)moveAllSectionsWithOffsetIfNeeded:withModifyPosition:;
- (void)didEndUsingSectionControllerAtIndex:delayReusable:;
- (void)didEndUsingSectionControllerAtIndex:;
- (void)removeSectionIndexes:;
- (void)clearReusePool;
- (id)dequeueReusableSectionControllerForType:atIndex:forTableView:collectionView:;
- (id)indexLastType;
- (id)indexLastController;
- (void)createPoolForTypeIfNeeded:;
- (void)setIndexLastType:;
- (void)setIndexLastController:;
- (void)removeSectionIndexes:eraseRemovedSection:;
- (id)dequeueReusableSectionControllerForType:atIndex:forCollectionView:;
- (void)didEndUsingAllSectionControllers;
- (void)reorderSectionAtIndexSet:toIndexSet:;
- (id)init;
- (void)setPool:;
- (id)pool;
- (void).cxx_destruct;
@end
