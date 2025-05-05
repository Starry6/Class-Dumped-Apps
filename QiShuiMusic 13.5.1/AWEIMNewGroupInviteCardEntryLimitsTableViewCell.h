@interface AWEIMNewGroupInviteCardEntryLimitsTableViewCell : UITableViewCell
@property (nonatomic) UILabel taskLabel;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) UIView separator;
- (void)__setupUI;
- (void)__updateWithStatus:;
- (void)configWithTaskName:status:needSeparator:;
- (void)setTaskLabel:;
- (id)taskLabel;
- (void)setSeparator:;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)separator;
- (id)statusLabel;
- (void)setStatusLabel:;
+ (id)identifier;
@end
