@interface AWETeenProtectionNewStyleHomeTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) AWEAWETeenProtectionNewStyleHomeTableModel model;
- (void)setModel:;
- (void)setSubtitleLabel:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setIconImageView:;
- (void)setupUI;
+ (id)identifier;
@end
