@interface TTSettingsManager : NSObject
@property (nonatomic) NSDictionary settings;
@property (nonatomic) NSMutableDictionary freezedSettings;
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
- (id)freezedSettings;
- (id)__settingForKey:defaultValue:freeze:;
- (void)insertSetting:forKey:;
- (void)saveSettings:;
- (void)setFreezedSettings:;
- (id)settingForKey:defaultValue:freeze:;
- (id)settingsForKeys:defaultValues:freeze:;
- (void)updateSetting:forKey:;
- (id)init;
- (id)settings;
- (void)setSettings:;
- (void)setSemaphore:;
- (void).cxx_destruct;
- (id)semaphore;
- (id)currentSettings;
+ (id)sharedManager;
@end
