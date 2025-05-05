@interface SASettingOpenWiFi : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openWiFi;
+ (id)openWiFiWithDictionary:context:;
@end
