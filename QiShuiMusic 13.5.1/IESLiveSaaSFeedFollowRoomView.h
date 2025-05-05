@interface IESLiveSaaSFeedFollowRoomView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) RACCompoundDisposable dispoable;
@property (nonatomic) IESLiveSaaSFeedFollowRoomViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindViewModel;
- (id)dispoable;
- (void)reloadFollowRoom;
- (void)scrollToIndex:;
- (void)setDispoable:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (id)viewModel;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (void)loadView;
- (id)collectionView;
- (void)setViewModel:;
@end
