@interface IESLiveChargeSafeRemindCell : UITableViewCell
@property (nonatomic) UILabel remindLabel;
@property (nonatomic) NSString remindText;
@property (nonatomic) UIImageView icon;
- (void)setRemindLabel:;
- (void)refreshText:;
- (id)remindLabel;
- (id)remindText;
- (void)setRemindText:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setupUI;
@end
