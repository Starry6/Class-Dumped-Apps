@interface AWEProfileMenuVerticalSectionController : AWEBaseListSectionController
@property (nonatomic) @? dismissBlock;
@property (nonatomic) AWEProfileMoreMenuViewModel parentViewModel;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)configSupplementaryFooterView:;
- (id)parentViewModel;
- (void)setParentViewModel:;
- (double)p_separatorHeight;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)dismissBlock;
- (void)setDismissBlock:;
- (Class)footerViewClass;
@end
