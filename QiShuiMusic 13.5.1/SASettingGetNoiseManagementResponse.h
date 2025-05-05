@interface SASettingGetNoiseManagementResponse : SASettingGetValueResponse
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getNoiseManagementResponse;
+ (id)getNoiseManagementResponseWithDictionary:context:;
@end
