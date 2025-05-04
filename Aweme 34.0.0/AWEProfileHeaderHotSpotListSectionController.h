@interface AWEProfileHeaderHotSpotListSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)handleTapAction;
- (Class)cellClass;
- (BOOL)showSeparator;
@end
