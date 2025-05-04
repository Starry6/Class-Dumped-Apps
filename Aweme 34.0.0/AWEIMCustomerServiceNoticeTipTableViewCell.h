@interface AWEIMCustomerServiceNoticeTipTableViewCell : AWEIMSystemMessageTableViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) YYLabel titleLable;
- (id)titleLable;
- (void)setTitleLable:;
- (void)p_updateConstraints;
- (void)configWithMessage:;
- (void)p_configMessage;
- (void)p_refreshCellHeight;
- (void)p_iconViewRemoveAnimation;
- (void)p_iconViewAddAnimation;
- (id)iconView;
- (void)awakeFromNib;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:animated:;
- (void)setupUI;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
