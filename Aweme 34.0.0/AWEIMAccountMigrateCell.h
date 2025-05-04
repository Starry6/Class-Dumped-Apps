@interface AWEIMAccountMigrateCell : UITableViewCell
@property (nonatomic) UIView cardContentView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) YYLabel contentLabel;
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) AWENotificationModelNew model;
@property (nonatomic) <AWEIMAccountMigrateCellDelegate> delegate;
- (void)p_setupUI;
- (void)configWithModel:;
- (id)cardContentView;
- (void)setCardContentView:;
- (void)p_addTextTapAction;
- (void)setModel:;
- (void)setTimeLabel:;
- (id)delegate;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)timeLabel;
- (id)titleLabel;
- (void)setDelegate:;
- (id)contentLabel;
- (void)setContentLabel:;
+ (double)heightOfCellWithModel:;
+ (id)identifier;
@end
