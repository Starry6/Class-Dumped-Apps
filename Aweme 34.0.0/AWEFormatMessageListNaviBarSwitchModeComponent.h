@interface AWEFormatMessageListNaviBarSwitchModeComponent : AWEIMComponentBase
@property (nonatomic) q currentMode;
- (void)switchDigitalHumanInteractionMode:compeltion:;
- (void)didUpdateFormatRoom:;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (id)naviBarViewIntrinsicContentSize;
- (double)naviBarViewCustomSpacing;
- (void)clickSwitchModeButtonHandler;
- (void)notifyNetWorkStatusWithNotification:;
- (void)componentDidMounted:;
- (long long)currentMode;
- (id)init;
- (void)setCurrentMode:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
