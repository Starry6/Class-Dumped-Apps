@interface AWEMVPadSmallCardSectionControllerV2 : AWEDCFeedBaseSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)cellForItemAtIndex:;
- (long long)waterfallColumnCount;
- (double)getCellWidth;
- (BOOL)enablePadConfig;
- (long long)padHorizontalBreakPoint;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
