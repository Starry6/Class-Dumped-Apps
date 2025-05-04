@interface AWEIMPrivateChatManagementFilterView : UIView
@property (nonatomic) UIView bgMaskView;
@property (nonatomic) UICollectionView filterCollectionView;
@property (nonatomic) AWEIMPrivateChatManagementFilterViewModel viewModel;
@property (nonatomic) <AWEIMPrivateChatManagementFilterViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithViewModel:;
- (void)__setupUI;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (void)__onMaskViewTapped;
- (id)filterCollectionView;
- (void)__addKVO;
- (void)setFilterCollectionView:;
- (id)init;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)viewModel;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
@end
