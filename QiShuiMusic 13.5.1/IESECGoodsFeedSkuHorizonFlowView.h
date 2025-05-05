@interface IESECGoodsFeedSkuHorizonFlowView : UIView
@property (nonatomic) IESECGoodsSpecInfo skuInfo;
@property (nonatomic) NSArray dataSource;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) <IESECGoodsFeedSkuHorizonFlowViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)skuInfo;
- (void)clickCollectionView:;
- (void)configWithModel:;
- (void)setSkuInfo:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDataSource:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setupUI;
@end
