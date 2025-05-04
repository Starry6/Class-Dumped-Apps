@interface AWEFeedSubtitleSettingsCell : UITableViewCell
@property (nonatomic) UIView container;
@property (nonatomic) DUXBaseImageView icon;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel rightContentLabel;
@property (nonatomic) DUXSwitch switchView;
@property (nonatomic) UIView separatorView;
@property (nonatomic) AWEFeedSubtitleSettingsCellModel model;
- (void)updateWithCellModel:;
- (void)updateCornerState:;
- (id)rightContentLabel;
- (void)setRightContentLabel:;
- (void)setModel:;
- (void)setContainer:;
- (id)container;
- (id)icon;
- (void)setSeparatorView:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)separatorView;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setSwitchView:;
- (id)switchView;
+ (double)cellHeight;
@end
