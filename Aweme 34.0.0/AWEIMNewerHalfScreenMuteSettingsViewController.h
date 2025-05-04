@interface AWEIMNewerHalfScreenMuteSettingsViewController : AWEIMHalfScreenSettingsViewController
@property (nonatomic) AWEIMNewerHalfScreenMuteSettingsViewModel viewModel;
- (id)initWithCon:extraParams:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
+ (id)containerOfViewControllerWithCon:extraParams:;
@end
