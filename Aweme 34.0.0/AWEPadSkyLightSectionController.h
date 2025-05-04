@interface AWEPadSkyLightSectionController : AWEPadBaseListSectionController
- (void)sectionWillDisplayCell:index:model:;
- (id)cellContentSizeWithCollectionViewSize:;
- (long long)numberOfItems;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
+ (Class)sectionViewModelClass;
@end
