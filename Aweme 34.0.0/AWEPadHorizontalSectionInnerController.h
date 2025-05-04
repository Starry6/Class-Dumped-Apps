@interface AWEPadHorizontalSectionInnerController : AWEPadBaseListSectionController
@property (nonatomic) AWEPadHorizontalSectionInnerViewModel viewModel;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)configSupplementaryHeaderView:;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
+ (Class)sectionViewModelClass;
@end
