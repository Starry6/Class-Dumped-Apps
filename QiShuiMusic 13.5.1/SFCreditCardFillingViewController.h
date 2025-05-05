@interface SFCreditCardFillingViewController : UIViewController
@property (nonatomic) SFFormAutocompleteState formAutocompleteState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray displayedCandidates;
- (BOOL)isVisibleForInputDelegate:inputViews:;
- (double)preferredHeightForTraitCollection:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)viewWillAppear:;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)_cardDataChanged:;
- (id)initWithFormAutocompleteState:;
- (double)_calculateCellWidthForCollectionViewWidth:;
- (void)_loadCardData;
- (id)formAutocompleteState;
@end
