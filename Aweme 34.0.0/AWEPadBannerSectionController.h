@interface AWEPadBannerSectionController : AWEPadBaseListSectionController
@property (nonatomic) AWEPadBannerSectionViewModel viewModel;
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)containerViewDidAppear;
- (void)containerViewDidDisappear;
- (id)cellContentSizeWithCollectionViewSize:;
- (long long)numberOfItemsInOnLineWithCollectionViewSize:;
- (long long)numberOfItems;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
+ (Class)sectionViewModelClass;
@end
