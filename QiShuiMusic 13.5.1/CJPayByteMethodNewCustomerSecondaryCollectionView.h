@interface CJPayByteMethodNewCustomerSecondaryCollectionView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) CJPayChannelBizModel data;
@property (nonatomic) <CJPayMethodTableViewDelegate> subPayDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSubPayDelegate:;
- (id)subPayDelegate;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)data;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (void)setData:;
- (long long)numberOfSectionsInCollectionView:;
- (id)collectionView;
- (void)setupUI;
- (void)reloadData:;
@end
