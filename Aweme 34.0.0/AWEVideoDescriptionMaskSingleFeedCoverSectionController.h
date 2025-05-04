@interface AWEVideoDescriptionMaskSingleFeedCoverSectionController : AWEBaseListSectionController
@property (nonatomic) AWEFeedCollectionContainerContext containerContext;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)init;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)containerContext;
- (void)setContainerContext:;
@end
