@interface AWEPLVConstantSectionController : AWEPadBaseListSectionController
@property (nonatomic) AWEPLVConstantSectionViewModel viewModel;
- (id)aAWEPadModuleAdapter;
- (id)cellContentSizeWithCollectionViewSize:;
- (long long)numberOfItemsInOnLineWithCollectionViewSize:;
- (long long)calculateSectionItemCount;
- (long long)numberOfItemsInOnLineWithCollection:;
- (long long)numberOfItems;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (double)dynamicPadding;
+ (Class)sectionViewModelClass;
+ (Class)aAWEPadModuleAdapterClass;
@end
