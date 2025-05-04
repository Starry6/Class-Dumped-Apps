@interface AWELandscapeDanmakuInputElement : AWELandscapeInteractionBaseElement
@property (nonatomic) AWELandScapeBottomDanmakuView danmakuView;
@property (nonatomic) BOOL hasTrackedDanmakuInputShow;
- (void)setDanmakuView:;
- (id)danmakuView;
- (void)setHasTrackedDanmakuInputShow:;
- (void)trackDanmakuLandScapePubShow;
- (void)realClickDanmakuPostButton;
- (void)handleDanmakuSwitchButtonTap;
- (void)handleDanmakuSettingButtonTap;
- (void)handleDanmakuPostButtonTap;
- (BOOL)hasTrackedDanmakuInputShow;
- (void)updateState:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
