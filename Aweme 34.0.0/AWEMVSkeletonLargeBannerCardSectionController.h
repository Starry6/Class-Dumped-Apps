@interface AWEMVSkeletonLargeBannerCardSectionController : AWEBaseListSectionController
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (long long)waterfallColumnCount;
- (id)init;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
