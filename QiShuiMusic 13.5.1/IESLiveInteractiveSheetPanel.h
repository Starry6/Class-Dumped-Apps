@interface IESLiveInteractiveSheetPanel : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView topLine;
@property (nonatomic) UITableView contentTabelView;
@property (nonatomic) UIView bottomView;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) <IESLiveInteractiveSheetViewModel> viewModel;
- (void)clickCancelButton;
- (id)contentTabelView;
- (void)didSetAttachingDIContext;
- (void)setContentTabelView:;
- (id)viewModel;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setCancelButton:;
- (void)setViewModel:;
- (id)titleLabel;
- (id)cancelButton;
- (id)bottomView;
- (void)setupUI;
- (void)setBottomView:;
- (id)topLine;
- (void)setTopLine:;
- (id)initWithFrame:viewModel:;
@end
