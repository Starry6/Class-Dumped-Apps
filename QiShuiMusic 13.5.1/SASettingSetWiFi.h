@interface SASettingSetWiFi : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setWiFi;
+ (id)setWiFiWithDictionary:context:;
@end
