@interface AWEProfileEditFlowLocationTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel valueLabel;
@property (nonatomic) UIImageView titleImageView;
@property (nonatomic) UIImageView valueImageView;
@property (nonatomic) UIImageView accessoryImageView;
@property (nonatomic) UIView separator;
- (void)configWithLocationSegment:;
- (void)configWithSelectedLocation:;
- (void)configWithCurrentLocation:isSelected:;
- (void)configWithClickToFetchLocation;
- (void)configWithFetchLocationFailure;
- (id)valueImageView;
- (void)setValueImageView:;
- (void)setSeparator:;
- (id)separator;
- (id)titleImageView;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setValueLabel:;
- (id)valueLabel;
- (id)accessoryImageView;
- (void)setAccessoryImageView:;
- (void)setTitleImageView:;
@end
