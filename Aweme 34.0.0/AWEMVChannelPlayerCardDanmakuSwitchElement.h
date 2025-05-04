@interface AWEMVChannelPlayerCardDanmakuSwitchElement : AWEMVChannelPlayerCardBaseElement
@property (nonatomic) UIButton danmakuSwitch;
- (void)initializeElement;
- (id)aAWEPadModuleAdapter;
- (id)danmakuSwitch;
- (void)setDanmakuSwitch:;
- (void)updateDanmakuSwitch;
- (void)updateAccessibilityWithIsOn:;
- (void)handleClickDanmakuSwitch;
- (void)updateState:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
+ (Class)aAWEPadModuleAdapterClass;
@end
