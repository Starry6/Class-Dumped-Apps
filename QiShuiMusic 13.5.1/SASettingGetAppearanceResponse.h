@interface SASettingGetAppearanceResponse : SASettingGetValueResponse
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getAppearanceResponse;
+ (id)getAppearanceResponseWithDictionary:context:;
@end
