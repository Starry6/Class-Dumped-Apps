@interface IESLivePrivilegeDanmakuFragment : IESLiveRoomComponent
@property (nonatomic) IESLivePrivilegeDanmakuSettingViewModel settingViewModel;
@property (nonatomic) IESLivePrivilegeDanmakuSettingView settingView;
@property (nonatomic) IESLivePrivilegeDanmakuSettingItem settingItem;
@property (nonatomic) IESLivePrivilegeDanmakuSwitchViewModel switchModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSettingView:;
- (void)setSwitchModel:;
- (void)componentCreate;
- (void)setSettingItem:;
- (void)bindData;
- (void)cleanDanmakuTabData;
- (void)componentBindService;
- (id)createDanmakuSettingViewWithLandscape:style:;
- (id)createDanmakuSwitchView;
- (void)setSettingViewModel:;
- (id)settingView;
- (id)settingViewModel;
- (id)switchModel;
- (void)updatePrivilegeDanmakuTab;
- (void)updatePrivilegeDanmakuTabWithCompletion:;
- (void).cxx_destruct;
- (id)settingItem;
+ (BOOL)isMixed;
@end
