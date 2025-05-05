@interface IESLivePrivilegeDanmakuSwitchViewModel : NSObject
@property (nonatomic) IESLivePrivilegeDanmakuSwitch view;
@property (nonatomic) BOOL switchOn;
@property (nonatomic) IESLivePrivilegeDanmakuSettingViewModel settingViewModel;
- (void)bindObserver;
- (void)setSettingViewModel:;
- (id)settingViewModel;
- (void)updateSwitchAction;
- (id)init;
- (id)view;
- (void).cxx_destruct;
- (void)setView:;
- (void)setSwitchOn:;
- (BOOL)switchOn;
@end
