@interface AWEProfileHeaderVSBannerSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (id)sizeForFooterWithCollectionViewSize:;
- (Class)cellClass;
- (BOOL)showSeparator;
@end
