@interface AWEBackgroundPlaySettingsCell : UITableViewCell
@property (nonatomic) UIView container;
@property (nonatomic) DUXBaseImageView icon;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) DUXSwitch switchView;
@property (nonatomic) UIView separatorView;
@property (nonatomic) AWEBackgroundPlaySettingsCellModel model;
- (void)updateWithCellModel:;
- (void)updateCornerMask:;
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
+ (double)contentMaxWidth;
+ (BOOL)shouldDisplayContentForBigFont:;
+ (double)cellHeight;
+ (id)contentFont;
@end
