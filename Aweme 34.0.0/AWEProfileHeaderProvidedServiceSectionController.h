@interface AWEProfileHeaderProvidedServiceSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)sizeForFooterWithCollectionViewSize:;
- (Class)cellClass;
- (BOOL)showSeparator;
@end
