@interface AWETeenTimeLockSettingTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIView sepLine;
- (void)p_setupUI;
- (void)setSepLine:;
- (id)sepLine;
- (void)setTimeLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)timeLabel;
- (id)titleLabel;
- (void)updateWithModel:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
