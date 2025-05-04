@interface AWEMVLargeCardSectionControllerV2 : AWEDCFeedBaseSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)cellForItemAtIndex:;
- (long long)waterfallColumnCount;
- (double)getCellWidth;
- (id)init;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
