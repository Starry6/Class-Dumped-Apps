@interface AWERTVVoipControlViewLayout : NSObject
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) <RTVVoipConfigureManagerInterface> configureManager;
@property (nonatomic) <RTVVoipSettingManagerInterface> settingManager;
@property (nonatomic) <RTVStorageArea> storageArea;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rxAwakeFromPropertyInjection;
- (id)storageArea;
- (id)configureManager;
- (BOOL)__isAudioCallWithVoipType:;
- (BOOL)__useNewMicrophoneText;
- (double)toolButtonStackElementSpacing;
- (id)toolButtonInfoWithType:enterType:;
- (id)leftToolButtonInitialTypesWithSession:;
- (id)rightToolButtonInitialTypesWithCaller:callType:rtvtype:;
- (id)actionButtonInitialTypesWithVoipSession:;
- (id)injector;
- (void).cxx_destruct;
- (id)settingManager;
@end
