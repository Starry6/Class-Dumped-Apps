@interface AWELongPressShareOutsideCell : UITableViewCell
@property (nonatomic) AWELongPressPanelViewGroupModel shareOutsideGroupModel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShareOutsideGroupModel:;
- (id)shareOutsideGroupModel;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setUpCollectionView;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setUpUI;
@end
