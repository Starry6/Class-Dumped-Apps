@interface SASettingSetBool : SASettingSetValue
@property (nonatomic) BOOL toggle;
@property (nonatomic) BOOL value;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setValue:;
- (id)encodedClassName;
- (BOOL)value;
- (BOOL)toggle;
- (void)setToggle:;
- (BOOL)mutatingCommand;
+ (id)setBool;
+ (id)setBoolWithDictionary:context:;
@end
