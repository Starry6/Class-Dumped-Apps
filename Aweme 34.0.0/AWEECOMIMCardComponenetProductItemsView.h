@interface AWEECOMIMCardComponenetProductItemsView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray itemModelsArr;
@property (nonatomic) AWEECOMIMBaseMsgModel cellModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCellModel:;
- (id)itemModelsArr;
- (void)updateWithItemArr:msgModel:;
- (void)setItemModelsArr:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)cellModel;
+ (double)designHeightWithItemArr:msgModel:;
@end
