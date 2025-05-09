@interface AWESearchFilterSingleListViewController : UICollectionViewController
@property (nonatomic) NSArray modelsArray;
@property (nonatomic) q listIndex;
@property (nonatomic) AWESearchFilterBaseManager filterManager;
@property (nonatomic) NSArray arrRegisteredCellIdentifiers;
@property (nonatomic) NSString bgColorString;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel parentModel;
@property (nonatomic) BOOL groupBuyFilterOptimizationEnabled;
@property (nonatomic) <AWESearchFilterSingleListDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)modelsArray;
- (void)setModelsArray:;
- (id)bgColorString;
- (id)filterManager;
- (void)setFilterManager:;
- (BOOL)isGroupBuyFilterOptimizationEnabled;
- (id)initWithListIndex:;
- (void)setGroupBuyFilterOptimizationEnabled:;
- (void)setBgColorString:;
- (void)updateWithParentModel:filterManager:;
- (void)setArrRegisteredCellIdentifiers:;
- (id)arrRegisteredCellIdentifiers;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)delegate;
- (void)viewDidLayoutSubviews;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)viewDidLoad;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (void)setListIndex:;
- (long long)listIndex;
- (void)setParentModel:;
- (id)parentModel;
@end
