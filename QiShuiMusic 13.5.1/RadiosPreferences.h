@interface RadiosPreferences : NSObject
@property (nonatomic) BOOL airplaneMode;
@property (nonatomic) <RadiosPreferencesDelegate> delegate;
@property (nonatomic) BOOL notifyForExternalChangeOnly;
- (void)refresh;
- (id)init;
- (void)setValue:forKey:;
- (void)dealloc;
- (id)getValueWithLockForKey:;
- (BOOL)notifyForExternalChangeOnly;
- (BOOL)telephonyStateWithBundleIdentifierOut:;
- (void)setAirplaneModeInNSS:;
- (void)setNotifyForExternalChangeOnly:;
- (void)setDelegate:;
- (void)notifyTarget:;
- (void)setAirplaneMode:;
- (void)synchronize;
- (BOOL)airplaneMode;
- (id)release;
- (void)setCallback:withContext:;
- (id)getValueForKey:;
- (id)delegate;
- (void)setAirplaneModeWithoutMirroring:;
- (id)initWithQueue:;
- (void)initializeSCPrefs:;
- (void)setTelephonyState:fromBundleID:;
+ (BOOL)shouldMirrorAirplaneMode;
@end
