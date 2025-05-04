@interface AWEPlayInteractionDislikePanelCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView seperateLineView;
- (id)seperateLineView;
- (void)setSeperateLineView:;
- (void)configWithDislikeModel:;
- (void)setHighlighted:animated:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
@end
