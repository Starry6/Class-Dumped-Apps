@interface IESLiveSaaSFeedPreviewPanelTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
- (void)bindWithIcon:title:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)iconImageView;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupSubviews;
@end
