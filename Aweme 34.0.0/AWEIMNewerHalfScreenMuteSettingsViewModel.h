@interface AWEIMNewerHalfScreenMuteSettingsViewModel : NSObject
@property (nonatomic) <IESIMConversationProtocol> con;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSArray muteSettingsCellViewModels;
- (void)setExtraParams:;
- (id)extraParams;
- (id)con;
- (void)setCon:;
- (id)initWithCon:extraParams:;
- (void)vc_viewDidLoad;
- (BOOL)__enableFoldChatOption;
- (id)muteSettingsCellViewModels;
- (void)didSwitchWithCurrentSetting:;
- (void)__setupDataSource;
- (void)setMuteSettingsCellViewModels:;
- (id)muteTaskWithShouldMute:;
- (id)foldTaskWithShouldFold:;
- (void)__executeUpdateMuteSettingsNotification;
- (void).cxx_destruct;
@end
