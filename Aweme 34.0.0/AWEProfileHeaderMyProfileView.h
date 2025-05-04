@interface AWEProfileHeaderMyProfileView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scrollViewDidScrollWithOffset:;
- (void)scrollViewDidEndDragingWithOffset:;
- (void)refreshAlphaForHeaderView:;
- (void)scrollViewBeginDraging;
- (id)headerCollectionView;
- (void)bindServiceWithContext:;
- (void)refreshHeaderFrame:viewModel:;
- (id)collectionView;
- (void)setCollectionView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)context;
@end
