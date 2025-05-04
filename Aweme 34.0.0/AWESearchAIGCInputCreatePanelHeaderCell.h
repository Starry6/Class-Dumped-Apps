@interface AWESearchAIGCInputCreatePanelHeaderCell : AWESearchAIGCInputCreatePanelBaseCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) AWESearchAIGCInputCreatePanelHeaderCellViewModel viewModel;
@property (nonatomic) <AWESearchAIGCInputCreatePanelHeaderCellDelegate> delegate;
- (void)closeAction:;
- (id)delegate;
- (id)viewModel;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
- (void)updateWithModel:;
+ (double)viewHeightWithViewModel:;
@end
