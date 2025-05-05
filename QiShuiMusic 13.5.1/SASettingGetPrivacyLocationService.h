@interface SASettingGetPrivacyLocationService : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getPrivacyLocationService;
+ (id)getPrivacyLocationServiceWithDictionary:context:;
@end
