@interface AWEIMSwitchMesssageTabModeEnterprisePopupView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray viewModels;
@property (nonatomic) DUXBasicSheet basicSheet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setupUI;
- (void)setBasicSheet:;
- (id)basicSheet;
- (void)showPopupViewOnViewController:;
- (void)__constructVMs;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setViewModels:;
- (id)viewModels;
@end
