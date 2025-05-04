@interface AWEIMInputFAQListTableViewCell : UITableViewCell
@property (nonatomic) AWEIMInputFAQListEntity entity;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView separator;
- (void)p_setupViews;
- (void)configCellWithEntity:;
- (id)entity;
- (void)setSeparator:;
- (id)separator;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setEntity:;
@end
