@interface IESLivePrivilegeDanmakuSettingView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UICollectionViewFlowLayout collectionLayout;
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) q shadowType;
@property (nonatomic) IESLivePrivilegeDanmakuSettingViewModel viewModel;
@property (nonatomic) @? contentDidUpdated;
- (id)contentDidUpdated;
- (void)setContentDidUpdated:;
- (void)setIsAdmin:;
- (id)viewModel;
- (void)didMoveToSuperview;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setViewModel:;
- (id)titleLabel;
- (void)setupUI;
- (id)collectionLayout;
- (void)setCollectionLayout:;
- (long long)shadowType;
- (BOOL)isAdmin;
- (void)setShadowType:;
@end
