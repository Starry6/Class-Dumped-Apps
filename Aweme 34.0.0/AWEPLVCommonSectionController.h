@interface AWEPLVCommonSectionController : AWEPLVConstantSectionController
- (long long)itemNumWithContainerView:;
- (long long)defaultItemNumWithContainerView:;
- (long long)numberOfItems;
- (id)inset;
- (double)minimumLineSpacing;
+ (Class)sectionViewModelClass;
@end
