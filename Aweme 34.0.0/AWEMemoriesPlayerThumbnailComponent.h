@interface AWEMemoriesPlayerThumbnailComponent : AWEMemoriesPlayerBaseComponent
@property (nonatomic) AWEMemoriesPlayerThumbnailViewModel viewModel;
@property (nonatomic) <AWEMemoriesPlayerCoreService> playerCoreService;
@property (nonatomic) <AWEMemoriesPlayerBottomBarService> bottomBarService;
@property (nonatomic) UIView contentView;
@property (nonatomic) AWEMemoriesPlayerThumbnailCollectionView thumbnailCollectionView;
@property (nonatomic) AWEMemoriesPlayerDataController dataController;
@property (nonatomic) NSMutableArray tileModelsArray;
@property (nonatomic) UIView selectedStatusView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataController:;
- (void)componentDidLoad;
- (void)bindObserver;
- (void)generateImpactFeedback;
- (id)serviceBinding;
- (id)bottomBarService;
- (void)setBottomBarService:;
- (id)tileModelsArray;
- (void)setupWithMemoriesDataController:;
- (void)setTileModelsArray:;
- (id)playerCoreService;
- (void)setPlayerCoreService:;
- (id)selectedStatusView;
- (void)setSelectedStatusView:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)viewModel;
- (id)contentView;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDecelerating:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)setupUI;
- (id)dataController;
- (void)setThumbnailCollectionView:;
- (id)thumbnailCollectionView;
@end
