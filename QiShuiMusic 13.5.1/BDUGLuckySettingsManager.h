@interface BDUGLuckySettingsManager : NSObject
@property (nonatomic) NSMutableDictionary settingsDic;
@property (nonatomic) NSMutableDictionary observerDic;
@property (nonatomic) NSMutableDictionary timerMap;
@property (nonatomic) NSRecursiveLock settingsLock;
@property (nonatomic) NSRecursiveLock observerLock;
@property (nonatomic) NSRecursiveLock timerLock;
@property (nonatomic) double resignActiveTime;
- (void)setObserverDic:;
- (void)setSettingsDic:;
- (void)updateSettings:forSettingsType:;
- (void)__applicationWillBecomeActive;
- (void)__applicationWillResignActive;
- (double)__currentServerTime;
- (long long)__fetchValidintervalWithInterval:;
- (void)__recoverCacheSettingsInfo;
- (void)__refreshPollingWithObserverInfo:;
- (id)__settingsKeyWithSettingsType:;
- (void)__setupNotification;
- (void)__timeFired:;
- (void)clearSettingsInDiskForSettingsType:;
- (id)observerDic;
- (void)recoverCacheSettingsInfoWithSettingsType:;
- (double)resignActiveTime;
- (void)setResignActiveTime:;
- (void)setTimerLock:;
- (void)setTimerMap:;
- (id)settingsDic;
- (id)settingsInfoWithSettingsType:;
- (void)startObserveSettingsWithSettingsType:pollingInterval:observer:;
- (void)stopObserverSettingsWithSettingsType:;
- (id)timerLock;
- (id)timerMap;
- (void)updateSettingsLastUpdateTimeWithSettingsType:;
- (id)init;
- (void)dealloc;
- (id)settingsLock;
- (id)observerLock;
- (void).cxx_destruct;
- (void)setSettingsLock:;
- (void)setObserverLock:;
+ (void)asyncStartup;
+ (id)sharedInstance;
@end
