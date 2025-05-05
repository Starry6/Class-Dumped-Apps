@interface SASettingSetAppearanceResponse : SASettingSetValueResponse
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setAppearanceResponse;
+ (id)setAppearanceResponseWithDictionary:context:;
@end
