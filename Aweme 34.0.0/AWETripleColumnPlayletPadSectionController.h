@interface AWETripleColumnPlayletPadSectionController : AWETripleColumnPlayletSectionController
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)currentContainerView;
- (id)sizeForItemInPad;
- (long long)columnNumOfCardForCurrentBreakPoint;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (Class)headerViewClass;
+ (Class)sectionViewModelClass;
@end
