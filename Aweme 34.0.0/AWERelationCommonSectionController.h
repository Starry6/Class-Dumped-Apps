@interface AWERelationCommonSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (Class)cellClass;
- (BOOL)showSeparator;
- (void)didSelectItemAtIndex:;
+ (Class)sectionViewModelClass;
@end
