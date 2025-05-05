@interface IESLiveItemShareItemCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIButton operationBtn;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel describeLabel;
@property (nonatomic) IESLiveItemShareItemCellViewModel viewModel;
@property (nonatomic) @? operationBtnClickBlock;
- (id)describeLabel;
- (id)operationBtn;
- (void)operationBtnClick;
- (id)operationBtnClickBlock;
- (void)setDescribeLabel:;
- (void)setOperationBtn:;
- (void)setOperationBtnClickBlock:;
- (id)initWithStyle:reuseIdentifier:;
- (id)viewModel;
- (void)setTitleLabel:;
- (void)setFrame:;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)setViewModel:;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupViews;
- (void)updateWithViewModel:;
@end
