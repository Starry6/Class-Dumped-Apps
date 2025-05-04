@interface AWEVideoDescriptionMaskLoadingSectionController : AWEBaseListSectionController
@property (nonatomic) AWEFeedCollectionContainerContext containerContext;
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)configSupplementaryHeaderView:;
- (id)init;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)containerContext;
- (void)setContainerContext:;
- (Class)headerViewClass;
@end
