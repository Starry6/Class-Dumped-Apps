@interface SASettingSetFloat : SASettingSetNumber
@property (nonatomic) float value;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setValue:;
- (id)encodedClassName;
- (float)value;
+ (id)setFloat;
+ (id)setFloatWithDictionary:context:;
@end
