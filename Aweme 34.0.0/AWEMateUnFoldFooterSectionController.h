@interface AWEMateUnFoldFooterSectionController : AWEBaseListSectionController
@property (nonatomic) AFDColletionViewListExpandFooterView footerView;
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)configSupplementaryFooterView:;
- (id)init;
- (void)setFooterView:;
- (id)footerView;
- (void).cxx_destruct;
- (Class)footerViewClass;
@end
