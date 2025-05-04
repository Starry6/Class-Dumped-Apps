@interface AWEVideoDescriptionMaskRelatedRecommendSectionController : AWEBaseListSectionController
@property (nonatomic) double cellWidth;
@property (nonatomic) <AWEFeedCollectionContainerRelatedRecommendSectionDelegate> delegate;
@property (nonatomic) AWEFeedCollectionContainerContext containerContext;
@property (nonatomic) AWEFeedCollectionContainerLayoutConfig layoutConfig;
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidAppear:;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (void)setLayoutConfig:;
- (id)init;
- (id)delegate;
- (Class)cellClass;
- (void).cxx_destruct;
- (void)setDelegate:;
- (double)cellWidth;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (id)containerContext;
- (void)setContainerContext:;
- (void)setCellWidth:;
- (Class)headerViewClass;
- (id)layoutConfig;
@end
