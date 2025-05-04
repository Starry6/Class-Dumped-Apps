@interface AWETimeLockSetTriggerTimeTableViewCell : UITableViewCell
@property (nonatomic) UILabel triggerTimeLabel;
@property (nonatomic) UIImageView checkMark;
@property (nonatomic) UIView lineView;
- (id)triggerTimeLabel;
- (void)setTriggerTimeLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setSelected:animated:;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
- (id)checkMark;
- (void)setCheckMark:;
+ (id)identifier;
@end
