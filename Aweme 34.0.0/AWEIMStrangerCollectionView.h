@interface AWEIMStrangerCollectionView : AWEIMBaseCollectionView
@property (nonatomic) <AWEIMStrangerCollectionViewCustomDelegate> customDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awe_collectionView:beforeConfigCell:atIndexPath:;
- (void)awe_collectionView:afterConfigCell:atIndexPath:;
- (BOOL)enableShowOlderHeaderView;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (void)dealloc;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:;
- (id)customDelegate;
- (void)setCustomDelegate:;
@end
