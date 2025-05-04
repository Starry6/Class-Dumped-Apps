@interface AWEPlayInteractionSocialTagsView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEPlayInteractionSocialTagsViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setupUI;
- (void)updateSocialTagsViewWithModel:;
- (void)onSocialTagShow;
- (id)collectionView;
- (id)initWithViewModel:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)viewModel;
- (void)setCollectionView:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
@end
