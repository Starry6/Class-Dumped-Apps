@interface SASettingGetNoiseManagement : SASettingGetValue
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getNoiseManagement;
+ (id)getNoiseManagementWithDictionary:context:;
@end
