@interface AWEStoryImpl.StoryTabTimeSectionController : AWEStoryKit.StoryKitBaseSectionController
@property (nonatomic) {UIEdgeInsets=dddd} inset;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (void)configSupplementaryHeaderView:;
- (id)customSupplementaryElementKinds;
- (id)customViewForSupplementaryElementOfKind:atIndex:;
- (id)init;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)setInset:;
- (void)setMinimumInteritemSpacing:;
- (void)setMinimumLineSpacing:;
- (id)sizeForItemAtIndex:;
- (Class)headerViewClass;
@end
