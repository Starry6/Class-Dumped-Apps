@interface AWENoticeEmptyTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
- (void)p_setupUI;
- (void)configTitle:detail:;
- (id)accessibilityLabel;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)detailLabel;
- (void)setDetailLabel:;
@end
