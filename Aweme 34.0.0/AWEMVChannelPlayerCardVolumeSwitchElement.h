@interface AWEMVChannelPlayerCardVolumeSwitchElement : AWEMVChannelPlayerCardBaseElement
@property (nonatomic) UIButton volumeSwitch;
- (id)aAWEPadModuleAdapter;
- (void)updateVolumeSwitch;
- (id)volumeSwitch;
- (void)handleClickVolumeSwitch;
- (void)setVolumeSwitch:;
- (void)updateAccessibilityWithIsMute:;
- (void)trackClickVolumeSwitch;
- (void)updateState:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
+ (Class)aAWEPadModuleAdapterClass;
@end
