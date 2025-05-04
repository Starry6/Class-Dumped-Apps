@interface AWEDeliveryMoreView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray items;
@property (nonatomic) @? block;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)checkIfHasRemind;
- (id)initWithFrame:defaultItems:;
- (id)collectionView;
- (id)items;
- (void)reloadWithItems:;
- (void)setItems:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)block;
- (void)setCollectionView:;
- (void)setBlock:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setupUI;
@end
