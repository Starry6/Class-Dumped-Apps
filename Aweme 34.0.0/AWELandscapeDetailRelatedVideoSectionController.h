@interface AWELandscapeDetailRelatedVideoSectionController : AWEBaseListSectionController
@property (nonatomic) AWELandscapePageContext context;
@property (nonatomic) <AWELandscapeSplitScreenContainerDelegate> splitScreenContainer;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (id)splitScreenContainer;
- (void)setSplitScreenContainer:;
- (void)handleDataStateChangedWithLoadingCell:;
- (void)refreshRelatedList:model:userInfo:;
- (void)trackClickRelatedVideoCellWithModel:;
- (void)trackShowRelatedVideoCellIfNeededWithModel:;
- (id)init;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (Class)headerViewClass;
@end
