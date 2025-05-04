@interface AWEIMHalfScreenSettingsChangeFilterViewController : UIViewController
@property (nonatomic) UIButton confirmBtn;
@property (nonatomic) UIButton backBtn;
@property (nonatomic) UICollectionView filterCollectionView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL didClickedConfirm;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)backBtn;
- (void)setBackBtn:;
- (id)confirmBtn;
- (void)setConfirmBtn:;
- (void)confirmBtnClicked;
- (void)__backBtnClicked;
- (id)filterCollectionView;
- (void)setFilterCollectionView:;
- (BOOL)didClickedConfirm;
- (void)setDidClickedConfirm:;
- (void)viewWillDisappear:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)preferredContentSize;
- (long long)collectionView:numberOfItemsInSection:;
- (id)titleLabel;
- (void)setupUI;
@end
