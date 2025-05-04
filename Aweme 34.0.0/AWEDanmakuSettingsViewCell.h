@interface AWEDanmakuSettingsViewCell : UITableViewCell
@property (nonatomic) UIView container;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel infoLabel;
@property (nonatomic) AWEDanmakuSettingsSlider slider;
@property (nonatomic) AWEDanmakuSettingsConfigModel configModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (id)configModel;
- (void)setConfigModel:;
- (void)setupUI:;
- (void)updateWithConfigModel:scene:;
- (void)didSlideOnPointIndex:needUpdate:;
- (void)didSlideOnValuePercent:needUpdate:;
- (void)setContainer:;
- (id)container;
- (id)slider;
- (void)setSlider:;
- (void)prepareForReuse;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)infoLabel;
- (void)setInfoLabel:;
+ (Class)aAWEPadModuleAdapterClass;
@end
