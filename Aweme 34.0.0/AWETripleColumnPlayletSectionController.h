@interface AWETripleColumnPlayletSectionController : AWEBaseListSectionController
@property (nonatomic) <AWEPlayletMoreFeedSectionDelegate> cardClickDelegate;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)setCardClickDelegate:;
- (id)cardClickDelegate;
- (id)init;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
