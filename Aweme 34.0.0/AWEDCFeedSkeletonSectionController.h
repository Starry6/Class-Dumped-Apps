@interface AWEDCFeedSkeletonSectionController : AWEDCFeedBaseSectionController
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)init;
- (Class)cellClass;
@end
