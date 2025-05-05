@interface IESLiveDanmakuSettingToolBar : UICollectionView
@property (nonatomic) NSArray items;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithFrame:lineSpacing:interSpacing:;
- (void)updateItem:atIndex:;
- (void)reload;
- (void)addItem:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)items;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setItems:;
- (void).cxx_destruct;
- (long long)numberOfSectionsInCollectionView:;
- (void)setupViews;
- (id)itemForType:;
@end
