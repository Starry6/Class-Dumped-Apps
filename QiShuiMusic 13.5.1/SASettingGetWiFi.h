@interface SASettingGetWiFi : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getWiFi;
+ (id)getWiFiWithDictionary:context:;
@end
