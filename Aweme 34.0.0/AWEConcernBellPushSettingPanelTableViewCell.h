@interface AWEConcernBellPushSettingPanelTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView checkIcon;
- (void)initViews;
- (void)configWithBellPushStrategy:type:isCheck:;
- (id)titleForLabelWithBellPushStrategy:type:;
- (void)setCheckIcon:;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSelected:animated:;
- (id)checkIcon;
+ (id)identifier;
+ (double)cellHeight;
@end
