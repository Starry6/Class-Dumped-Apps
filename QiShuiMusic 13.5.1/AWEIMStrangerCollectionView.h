@interface AWEIMStrangerCollectionView : AWEIMBaseCollectionView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awe_collectionView:afterConfigCell:atIndexPath:;
- (void)awe_collectionView:beforeConfigCell:atIndexPath:;
- (void)scrollViewDidScroll:;
@end
