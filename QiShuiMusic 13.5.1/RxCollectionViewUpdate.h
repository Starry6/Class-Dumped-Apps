@interface RxCollectionViewUpdate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__computeItemUpdates;
- (void)__computeSectionUpdates;
- (id)initWithCollectionView:updateItems:oldModel:newModel:oldVisibleBounds:newVisibleBounds:;
- (id)finalIndexPathForInitialIndexPath:;
- (void)dealloc;
- (long long)finalSectionCount;
- (long long)initialSectionIndexForFinalSectionIndex:;
- (long long)finalSectionIndexForInitialSectionIndex:;
- (void).cxx_destruct;
@end
