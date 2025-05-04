@interface AWESearchAIGCHotspotCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIView bottomSepView;
- (id)bottomSepView;
- (void)reloadUIWithViewModel:;
- (void)setBottomSepView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
+ (id)identifier;
@end
