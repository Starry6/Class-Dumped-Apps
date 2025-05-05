@interface CJPayBaseListCellView : UITableViewCell
@property (nonatomic) UIView topMarginView;
@property (nonatomic) UIView bottomMarginView;
@property (nonatomic) CJPayCommonListViewController viewController;
@property (nonatomic) UIView containerView;
@property (nonatomic) CJPayBaseListViewModel viewModel;
@property (nonatomic) <CJPayBaseListEventHandleProtocol> eventHandler;
- (void)bindViewModel:;
- (void)p_baseMakeConstraints;
- (void)setTopMarginView:;
- (id)topMarginView;
- (id)initWithStyle:reuseIdentifier:;
- (id)viewModel;
- (id)containerView;
- (void)setContainerView:;
- (void)setEventHandler:;
- (id)viewController;
- (id)eventHandler;
- (void).cxx_destruct;
- (void)setViewModel:;
- (void)setupUI;
- (void)didSelect;
- (id)bottomMarginView;
- (void)setBottomMarginView:;
@end
