@interface IESLiveInteractivePlayModeSelectPanelCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIView redDot;
- (id)redDot;
- (void)setRedDot:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)setDescriptionLabel:;
- (id)descriptionLabel;
- (void).cxx_destruct;
- (id)iconImageView;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupViews;
- (void)updateWithConfiguration:;
@end
