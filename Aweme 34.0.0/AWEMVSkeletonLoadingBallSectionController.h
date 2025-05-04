@interface AWEMVSkeletonLoadingBallSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (long long)waterfallColumnCount;
@end
