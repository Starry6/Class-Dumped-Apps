@interface AWEProfileHeaderLongVideoBannerSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForFooterWithCollectionViewSize:;
- (Class)cellClass;
- (BOOL)showSeparator;
- (id)sizeForItemAtIndex:;
@end
