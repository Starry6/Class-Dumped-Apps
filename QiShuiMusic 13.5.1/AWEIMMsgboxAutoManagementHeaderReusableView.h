@interface AWEIMMsgboxAutoManagementHeaderReusableView : UICollectionReusableView
@property (nonatomic) UIButton selectBtn;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UITapGestureRecognizer tapGes;
@property (nonatomic) <AWEIMMsgboxAutoManagementListCollectionViewProtocol> delegate;
- (void)tapView;
- (void)refreshHeaderWithType:withCount:;
- (id)selectBtn;
- (void)setSelectBtn:;
- (void)setTapGes:;
- (id)tapGes;
- (void)setTitleLabel:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
