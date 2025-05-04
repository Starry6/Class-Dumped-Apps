@interface AWEIMFansGroupCardStyleFooterCollectionReusableView : UICollectionReusableView
@property (nonatomic) AWEIMFansGroupManagementPlateInfoViewModel viewModel;
@property (nonatomic) UIView footerBaseView;
@property (nonatomic) UIButton footerActionBtn;
@property (nonatomic) @? actionBlock;
- (void)configWithViewModel:;
- (void)__setupUI;
- (id)footerBaseView;
- (void)setFooterBaseView:;
- (void)__btnClicked;
- (id)footerActionBtn;
- (void)setFooterActionBtn:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setActionBlock:;
- (id)actionBlock;
+ (id)identifierWithType:;
@end
