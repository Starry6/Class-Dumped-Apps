@interface BDTuringSettingsHelper : NSObject
- (void)updateSettingCustomBlock:key1:value:forAppId:inRegion:;
- (id)init;
+ (id)sharedInstance;
@end
