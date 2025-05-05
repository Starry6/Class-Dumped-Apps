@interface SASettingSetSpokenNotificationsEnabled : SASettingSetBool
@property (nonatomic) NSString appBundleId;
@property (nonatomic) NSDate timeToReEnable;
- (void)setAppBundleId:;
- (id)groupIdentifier;
- (id)appBundleId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)timeToReEnable;
- (void)setTimeToReEnable:;
+ (id)setSpokenNotificationsEnabled;
+ (id)setSpokenNotificationsEnabledWithDictionary:context:;
@end
