@interface AWEAnchorAdditionHorizontalCell : UITableViewCell
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEAnchorAdditionListModel listModel;
@property (nonatomic) @? didSelectItem;
@property (nonatomic) @? willDisplayItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)willDisplayItem;
- (void)updateUIWithListModel:;
- (void)setDidSelectItem:;
- (void)setWillDisplayItem:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)setListModel:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithStyle:reuseIdentifier:;
- (id)listModel;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setupSubviews;
- (id)didSelectItem;
+ (id)anchorAdditionCellIdentifier;
+ (double)anchorAdditionCellForHeight;
@end
