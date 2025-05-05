@interface UICollectionViewFocusUpdateContext : UIFocusUpdateContext
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSIndexPath previouslyFocusedIndexPath;
@property (nonatomic) NSIndexPath nextFocusedIndexPath;
- (void).cxx_destruct;
- (id)collectionView;
- (id)_initWithContext:collectionView:cachedPreviouslyFocusedIndexPath:;
- (id)previouslyFocusedIndexPath;
- (id)nextFocusedIndexPath;
+ (id)_contextWithContext:collectionView:;
+ (id)_contextWithContext:collectionView:cachedPreviouslyFocusedIndexPath:;
@end
