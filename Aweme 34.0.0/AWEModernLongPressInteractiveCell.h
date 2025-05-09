@interface AWEModernLongPressInteractiveCell : UITableViewCell
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray dataArray;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) AWELongPressPanelViewGroupModel longPressViewGroupModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)longPressViewGroupModel;
- (void)setLongPressViewGroupModel:;
- (void)cellDisplay;
- (void)cellDisappear;
- (id)collectionView;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)setCollectionView:;
- (BOOL)isAppearing;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setIsAppearing:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)dataArray;
- (void)setupCollectionView;
- (void)setDataArray:;
- (void)setUpUI;
@end
