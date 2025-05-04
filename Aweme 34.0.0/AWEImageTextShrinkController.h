@interface AWEImageTextShrinkController : BDMultiContentContainer.BaseContentListController
@property (nonatomic) BOOL collectionViewFrameEqualSuperView;
- (BOOL)getShrinkState:;
- (void)updateShrinkState:insets:animated:animationDuration:;
- (BOOL)collectionViewFrameEqualSuperView;
- (void)updateAwemeContentViewFrame:;
- (void)updateAwemeContentViewFrame:animationDuration:;
- (id)awemeContentViewInitFrame;
- (id)awemeContentViewFrame;
- (void)setCollectionViewFrameEqualSuperView:;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setupCollectionView:;
@end
