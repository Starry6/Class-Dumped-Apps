@interface AWELiveAcqCastVideoProfileMixViewController : UIViewController
@property (nonatomic) AWELiveAcqCastVideoMixScrollTailView footerView;
@property (nonatomic) BOOL isTransfering;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWELiveAcqCastVideoMixDataManager dataManager;
@property (nonatomic) <AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isTransfering;
- (void)setIsTransfering:;
- (void)updateFooterFrame;
- (id)collectionView;
- (id)dataManager;
- (void)setFooterView:;
- (id)footerView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)viewModel;
- (void)viewDidLoad;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)setDataManager:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)scrollViewDidEndDragging:willDecelerate:;
@end
