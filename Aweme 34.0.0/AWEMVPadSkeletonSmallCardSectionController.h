@interface AWEMVPadSkeletonSmallCardSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (long long)waterfallColumnCount;
- (BOOL)enablePadConfig;
- (long long)padHorizontalBreakPoint;
- (BOOL)isPortraitForIndex:;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
