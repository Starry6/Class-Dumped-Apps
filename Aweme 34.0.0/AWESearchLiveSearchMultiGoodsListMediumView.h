@interface AWESearchLiveSearchMultiGoodsListMediumView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UICollectionViewFlowLayout collectionViewLayout;
@property (nonatomic) NSArray datas;
@property (nonatomic) @? didSelectGoodsAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithDatas:;
- (void)setDidSelectGoodsAction:;
- (id)didSelectGoodsAction;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)collectionViewLayout;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setCollectionViewLayout:;
- (id)datas;
- (void)setDatas:;
+ (double)viewHeightWithMaxWidth:;
@end
