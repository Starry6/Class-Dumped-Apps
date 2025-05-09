@interface AWENoticeFoldingStateManagementViewController : UIViewController
@property (nonatomic) NSArray foldGroupList;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSMutableDictionary changedList;
@property (nonatomic) @? exitBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackPageShow;
- (void)backBtnClicked;
- (id)exitBlock;
- (void)setExitBlock:;
- (id)foldGroupList;
- (void)setFoldGroupList:;
- (id)changedList;
- (void)p_shouldUnfold:withModel:;
- (void)trackPopupDismissWithNoticeName:shouldUnfold:successfulState:;
- (void)trackPopupShowWithModel:;
- (id)p_arrayToString:;
- (id)initWithFoldGroupList:;
- (void)setChangedList:;
- (void)viewWillDisappear:;
- (id)collectionView;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)viewDidLoad;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
@end
