@interface AWERadarSettingItemView : UIView
@property (nonatomic) Q itemType;
@property (nonatomic) UIImageView iconImage;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView separationLine;
@property (nonatomic) UIButton explainButton;
@property (nonatomic) <AWERadarSettingItemViewDelegate> delegate;
@property (nonatomic) UIView<AWESettingSwitchProtocol> aSwitch;
- (void)p_setupUI;
- (void)p_setupLayout;
- (id)separationLine;
- (void)setSeparationLine:;
- (id)explainButton;
- (void)setExplainButton:;
- (void)p_setupEnableShake;
- (void)p_setupEnableHistory;
- (void)updateEnableShake;
- (void)updateEnableHistory;
- (void)setupItemDisable;
- (void)setupItemEnable;
- (void)showExplainAlert;
- (void)hidenSeparationLine;
- (unsigned long long)itemType;
- (id)iconImage;
- (void)setItemType:;
- (id)delegate;
- (void)setIconImage:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (id)aSwitch;
- (void)setASwitch:;
- (id)initWithItemType:;
+ (double)suggestHeight;
@end
