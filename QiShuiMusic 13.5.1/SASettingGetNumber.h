@interface SASettingGetNumber : SASettingGetValue
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getNumber;
+ (id)getNumberWithDictionary:context:;
@end
