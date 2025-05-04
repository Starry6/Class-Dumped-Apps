@interface AWEECOMIMEmoticonTabView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) q selectedIndex;
@property (nonatomic) NSArray tabArr;
@property (nonatomic) @? clickBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)setTabSelectedIndex:;
- (id)tabArr;
- (void)scrollToSelectedWithIndex:animation:;
- (id)initWithTabArr:;
- (void)setTabArr:;
- (id)collectionView;
- (void)setSelectedIndex:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (long long)selectedIndex;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setupUI;
@end
