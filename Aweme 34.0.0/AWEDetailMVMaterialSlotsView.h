@interface AWEDetailMVMaterialSlotsView : UIView
@property (nonatomic) NSMutableArray allModels;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UILabel fragmentLabel;
@property (nonatomic) UILabel durationLabel;
@property (nonatomic) @? didTouchAssetBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadSlotsViewWithModel:;
- (void)setDidTouchAssetBlock:;
- (id)fragmentLabel;
- (id)allModels;
- (id)didTouchAssetBlock;
- (void)setAllModels:;
- (void)setFragmentLabel:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setupUI;
- (id)durationLabel;
- (void)setDurationLabel:;
@end
