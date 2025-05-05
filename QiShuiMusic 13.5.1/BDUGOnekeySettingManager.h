@interface BDUGOnekeySettingManager : NSObject
@property (nonatomic) NSDictionary settings;
- (void)saveSettings:;
- (BOOL)useMobileSDKGetCarrier;
- (BOOL)useNewAPIGetCarrier;
- (id)init;
- (id)settings;
- (void)setSettings:;
- (void).cxx_destruct;
- (id)currentSettings;
+ (id)sharedInstance;
@end
