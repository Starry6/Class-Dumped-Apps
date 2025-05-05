@interface LynxSettingsManager : NSObject
@property (nonatomic) NSDictionary settings;
- (long long)settingsTime;
- (id)stringFromSettings:;
- (void)updateSettings:withTime:;
- (id)init;
- (id)settings;
- (void)setSettings:;
- (void)updateSettings:;
- (void).cxx_destruct;
- (void)loadSettings;
+ (id)sharedInstance;
@end
