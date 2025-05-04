@interface AWERunningProtectManager : NSObject
@property (nonatomic) BOOL needProtect;
- (void)onLastCrashDetected;
- (void)updateLastExceptionTime;
- (BOOL)needProtectThisSession;
- (void)setNeedProtect:;
- (BOOL)needProtect;
- (unsigned long long)getProtectDurationSecondsSinceLastException;
- (BOOL)_overrideAutoModeEnabled:;
- (BOOL)isAutoModeBySetting;
- (BOOL)isAutoMode;
- (BOOL)_overrideShouldStart:;
- (BOOL)isProtectManualGlobalEnable;
- (BOOL)shouldStartConfig;
- (BOOL)getIgnoreDuplicate;
- (BOOL)getIgnoreTryCatch;
- (long long)getProtectionType;
- (BOOL)getUseManualSettingDefaultValue;
- (id)init;
- (void)config;
- (void)start;
+ (id)shared;
@end
