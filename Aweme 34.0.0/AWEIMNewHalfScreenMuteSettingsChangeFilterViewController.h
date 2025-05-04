@interface AWEIMNewHalfScreenMuteSettingsChangeFilterViewController : AWEIMHalfScreenSettingsChangeFilterViewController
@property (nonatomic) AWEIMHalfScreenMuteSettingsViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)confirmBtnClicked;
- (void)didClickCell:;
- (void)viewWillDisappear:;
- (BOOL)collectionView:shouldSelectItemAtIndexPath:;
- (id)initWithViewModel:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)viewModel;
- (void)viewDidLoad;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
@end
