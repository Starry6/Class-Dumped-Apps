@interface AWERTVReminderService : HTSService
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) NSMutableDictionary hasRemindedRooms;
@property (nonatomic) NSLock lock;
@property (nonatomic) <RTVUserProfileManagerInterface> profileManager;
@property (nonatomic) <RTVSettingsManager> settingManager;
@property (nonatomic) RTVVoipMonitor voipMonitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)rxAwakeFromPropertyInjection;
- (id)voipMonitor;
- (void)setProfileManager:;
- (id)__keyOfRemindModel:;
- (id)hasRemindedRooms;
- (long long)__missCallTypeFromRemindType:;
- (BOOL)canRemindWithModel:;
- (void)markDidRemindWithModel:;
- (id)lock;
- (id)injector;
- (void).cxx_destruct;
- (id)settingManager;
- (id)profileManager;
@end
