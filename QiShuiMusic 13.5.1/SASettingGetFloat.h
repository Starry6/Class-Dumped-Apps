@interface SASettingGetFloat : SASettingGetNumber
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getFloat;
+ (id)getFloatWithDictionary:context:;
@end
