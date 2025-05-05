@interface SASettingGetSpokenNotificationsEnabled : SASettingGetBool
@property (nonatomic) NSString appBundleId;
- (void)setAppBundleId:;
- (id)groupIdentifier;
- (id)appBundleId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getSpokenNotificationsEnabled;
+ (id)getSpokenNotificationsEnabledWithDictionary:context:;
@end
