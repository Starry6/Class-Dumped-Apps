@interface SASettingGetValue : SASettingCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getValue;
+ (id)getValueWithDictionary:context:;
@end
