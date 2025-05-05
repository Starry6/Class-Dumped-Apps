@interface BDMannorSettingsManager : NSObject
@property (nonatomic) BOOL mannorSettingDidReady;
- (void)handleSettingsNotification:;
- (BOOL)mannorSettingDidReady;
- (void)observeADSettingsReady;
- (void)setMannorSettingDidReady:;
- (id)init;
+ (id)geckoConfigDict;
+ (id)clientAIConfigDict;
+ (id)geckoChannelsWhenInit;
+ (BOOL)ulinkEnable;
+ (id)sharedManager;
@end
