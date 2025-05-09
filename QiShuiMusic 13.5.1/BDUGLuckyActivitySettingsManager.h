@interface BDUGLuckyActivitySettingsManager : NSObject
@property (nonatomic) BDUGLuckyActivityStaticSettingsHandler staticHandler;
@property (nonatomic) BDUGLuckyActivityPersonalSettingsHandler personalHandler;
@property (nonatomic) BDUGLuckyActivityPollingSettingsHandler pollingHandler;
@property (nonatomic) BDUGLuckyActivitySettingsConfig config;
@property (nonatomic) @? responseSerializerBlock;
@property (nonatomic) @? startPollingSettingsBlock;
@property (nonatomic) @? stopPollingSettingsBlock;
@property (nonatomic) BOOL calibratorHasChecked;
@property (nonatomic) NSArray probePathArray;
@property (nonatomic) NSArray headerProbePathArray;
@property (nonatomic) NSObject<OS_dispatch_queue> probePathSafeRWQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__startPollingSettingsIfNeeded:;
- (id)personalHandler;
- (void)__changePollingSettingsStatusIfNeeded:;
- (void)__configSettingsModel:urlQueryItem:;
- (double)__currentServerTimeMS;
- (void)__onReceiveCalibratorCheckedEvent;
- (void)__recoverCacheSettingsInfo;
- (void)__removeNotification;
- (void)__removeStartPollingSettingsBlock;
- (void)__removeStopPollingSettingsBlock;
- (id)__responseFilter;
- (void)__setupNotification;
- (BOOL)__shouldUpdatePersonalSettingsWithTTHttpResponse:resultModel:;
- (BOOL)__shouldUpdateStaticSettingsWithTTHttpResponse:resultModel:;
- (void)__stop;
- (void)__stopPollingSettingsIfNeeded;
- (unsigned long long)__switchToUpdateSceneWithInputUpdateScene:;
- (void)__updateFeSettingsDictWithSettingsType:keys:decoded:targetDict:missingKeys:;
- (void)__updateSettingsForAweme:request:;
- (void)__updateSettingsFromTeenModeChanged;
- (void)__updateSettingsWithTTHttpResponse:resultModel:;
- (void)beginSettings;
- (BOOL)calibratorHasChecked;
- (void)clearSettingsCache;
- (void)clearSettingsCacheInDisk;
- (void)clearSettingsCacheWithSceneType:;
- (unsigned long long)currentActivityStageWithActivityId:;
- (long long)currentRedRainId;
- (long long)currentVersionForSettingsType:;
- (id)fetchFeSettingsWithUrl:queryItem:;
- (id)fetchOldDogSettingsObjectWithActivityId:key:subKey:subSubKey:;
- (id)fetchPersonalSettingsInfo;
- (id)fetchPollingSettingsInfo;
- (id)fetchPollingSettingsInfoWithActivityName:;
- (id)fetchPollingSettingsInfoWithActivityName:cycleID:;
- (id)fetchRedPacketRainArray;
- (id)fetchSettingsDecodedObjectWithSettingsType:keyPath:;
- (void)fetchSettingsInfoWithSettingsType:completion:;
- (id)fetchSettingsObjectWithSettingsType:keyPath:;
- (void)fetchSettingsObjectWithSettingsType:keyPaths:completion:;
- (id)fetchSettingsRawDataWithSettingsType:;
- (id)fetchStaticSettingsInfo;
- (BOOL)firstSettingsHasRequestBackWithSettingsType:;
- (BOOL)hasRequestedPersonalSettings;
- (id)headerProbePathArray;
- (BOOL)isCurrentRedRainCompleted;
- (BOOL)isRedRainCompletedWithRainId:;
- (void)logForPersonalProbeWithPath:version:;
- (void)logForStaticProbeWithPath:version:;
- (void)onReceiveSettingsUpdateEvent;
- (void)onReceiveUserStateChangedEventWithChangedType:;
- (id)personalSettingsVersion:;
- (id)personalSettingsVersionFromHeader:;
- (id)pollingHandler;
- (id)probePathArray;
- (id)probePathSafeRWQueue;
- (void)registerResponseInterceptBlock;
- (void)removeResponseInterceptBlock;
- (id)responseSerializerBlock;
- (void)setCalibratorHasChecked:;
- (void)setHeaderProbePathArray:;
- (void)setPersonalHandler:;
- (void)setPollingHandler:;
- (void)setProbePathArray:;
- (void)setProbePathSafeRWQueue:;
- (void)setResponseSerializerBlock:;
- (void)setStartPollingSettingsBlock:;
- (void)setStaticHandler:;
- (void)setStopPollingSettingsBlock:;
- (BOOL)settingsHasDataWithSettingsType:;
- (id)startPollingSettingsBlock;
- (id)staticHandler;
- (id)staticSettingsVersion:;
- (id)staticSettingsVersionFromHeader:;
- (id)stopPollingSettingsBlock;
- (void)trackSettingsProbeUpdateWithURL:channel:newVersion:;
- (void)updateSettingsFromScene:settingsType:isForced:;
- (void)updateSettingsIfNeededFromScene:settingsType:;
- (void)updateSettingsWithVersion:settingsType:;
- (id)init;
- (void)dealloc;
- (void)setConfig:;
- (id)currentConfig;
- (void).cxx_destruct;
- (id)config;
+ (id)ABSetting;
+ (BOOL)isDefaultABTest;
+ (void)didUnbindCls:toCls:;
+ (unsigned long long)effectTime;
+ (id)extraServiceProtocols;
+ (void)willUnbindCls:toCls:;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
