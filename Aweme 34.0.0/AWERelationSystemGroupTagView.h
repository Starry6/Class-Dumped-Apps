@interface AWERelationSystemGroupTagView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray groupsArray;
@property (nonatomic) NSNumber currentGroupID;
@property (nonatomic) @? groupSelectBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentGroupID;
- (void)configureUI;
- (void)setGroupsArray:;
- (id)initWithGroupsArray:defaultIndex:;
- (void)setGroupSelectBlock:;
- (id)groupSelectBlock;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)layoutSubviews;
- (id)flowLayout;
- (id)groupsArray;
- (void)setCurrentGroupID:;
- (double)suggestedHeight;
@end
