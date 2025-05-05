@interface IESECStoreSearchHistoryCell : UICollectionViewCell
@property (nonatomic) IESECStoreSearchHistoryCellVM viewModel;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton deleteBtn;
@property (nonatomic) UIButton foldBtn;
- (void)deleteBtnTapped;
- (id)foldBtn;
- (void)containerTapped;
- (void)bindViewModel:;
- (id)deleteBtn;
- (void)foldBtnTapped;
- (void)setDeleteBtn:;
- (void)setFoldBtn:;
- (id)viewModel;
- (void)setTitleLabel:;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)titleLabel;
- (void)setupViews;
+ (id)cellSizeWithViewModel:;
@end
