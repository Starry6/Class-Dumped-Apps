@interface AWEPaySKMPayStatusCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel payStatusLabel;
- (id)payStatusLabel;
- (void)setPayStatusLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (id)iconImageView;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setNameLabel:;
- (void)setupUI;
- (void)updateWithInfo:;
@end
