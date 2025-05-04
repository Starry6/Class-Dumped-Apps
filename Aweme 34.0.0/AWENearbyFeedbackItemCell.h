@interface AWENearbyFeedbackItemCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) CAShapeLayer contentShapeLayer;
- (void)configWithItem:;
- (id)contentShapeLayer;
- (void)setContentShapeLayer:;
- (void)setHighlighted:animated:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
@end
