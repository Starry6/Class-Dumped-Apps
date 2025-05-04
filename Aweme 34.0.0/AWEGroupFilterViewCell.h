@interface AWEGroupFilterViewCell : UITableViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleView;
@property (nonatomic) UIImageView selectedView;
@property (nonatomic) UIImageView dotView;
@property (nonatomic) UIImageView redDotView;
- (void)setSelectedView:;
- (id)redDotView;
- (void)setRedDotView:;
- (void)updateSelectedImageWithModel:isSelected:;
- (void)updateRedDotView:;
- (void)updateHightLightColor:;
- (void)configureCellWithModel:isSelected:;
- (void)p_trackInnerMessageNotification;
- (id)titleView;
- (void)setTitleView:;
- (void)setHighlighted:animated:;
- (id)iconView;
- (void)setIconView:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)dotView;
- (void)setDotView:;
- (void)setupUI;
- (id)selectedView;
+ (id)identifier;
@end
