@interface AWELandscapeResolutionSettingsCell : UITableViewCell
@property (nonatomic) UILabel descLabel;
- (id)descLabel;
- (void)setDescLabel:;
- (void)updateSelectedStatus:;
- (void)updateWithManualGearType:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)identifier;
@end
