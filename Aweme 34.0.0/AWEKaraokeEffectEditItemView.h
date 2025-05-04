@interface AWEKaraokeEffectEditItemView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UISlider slideBar;
@property (nonatomic) UISwitch switchBtn;
@property (nonatomic) q type;
@property (nonatomic) @? onValueChanged;
- (void)setupTitleUI;
- (void)setupContentUI;
- (id)switchBtn;
- (void)setSwitchBtn:;
- (void)valueDidChanged:;
- (void)setSlideBar:;
- (id)slideBar;
- (id)onValueChanged;
- (void)setOnValueChanged:;
- (long long)type;
- (void)setType:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)initWithStyle:;
- (id)titleLabel;
- (void)updateValue:;
- (void)updateTitle:;
@end
