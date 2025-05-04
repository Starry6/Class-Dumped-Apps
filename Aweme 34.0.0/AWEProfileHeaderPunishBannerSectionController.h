@interface AWEProfileHeaderPunishBannerSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)sizeForFooterWithCollectionViewSize:;
- (Class)cellClass;
- (BOOL)showSeparator;
@end
