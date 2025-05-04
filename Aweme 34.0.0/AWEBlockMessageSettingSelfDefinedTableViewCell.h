@interface AWEBlockMessageSettingSelfDefinedTableViewCell : UITableViewCell
@property (nonatomic) UILabel title;
@property (nonatomic) @? rightBlock;
@property (nonatomic) AWEBlockMessageSettingSelfDefinedButton rightButton;
@property (nonatomic) Q cornerType;
@property (nonatomic) UIView lineView;
@property (nonatomic) UIView containerView;
- (void)setupCorner;
- (void)configWithWord:cornerType:isFixedCell:block:;
- (void)setRightBlock:;
- (id)rightBlock;
- (void)clickRightButton;
- (void)setRightButton:;
- (void)prepareForReuse;
- (id)containerView;
- (id)rightButton;
- (void)setContainerView:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
- (unsigned long long)cornerType;
- (void)setCornerType:;
+ (id)identifier;
@end
