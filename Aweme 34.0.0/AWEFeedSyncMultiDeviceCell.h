@interface AWEFeedSyncMultiDeviceCell : UITableViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEFeedSyncMultiDevice device;
@property (nonatomic) UILabel accessoryLabel;
@property (nonatomic) Q theme;
- (void)updateDevice:theme:;
- (unsigned long long)theme;
- (void)setTheme:;
- (id)titleColor;
- (void)prepareForReuse;
- (id)iconView;
- (void)setDevice:;
- (void)setIconView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)device;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)accessoryLabel;
- (void)setAccessoryLabel:;
- (void)setupUI;
@end
