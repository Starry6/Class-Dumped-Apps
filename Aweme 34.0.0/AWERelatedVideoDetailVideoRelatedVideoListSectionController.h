@interface AWERelatedVideoDetailVideoRelatedVideoListSectionController : AWERelatedVideoDetailVideoRelatedVideoBaseSectionController
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (long long)waterfallColumnCount;
- (Class)cellClass;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
