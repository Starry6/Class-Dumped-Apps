@interface SASettingGetGuidedAccess : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getGuidedAccess;
+ (id)getGuidedAccessWithDictionary:context:;
@end
