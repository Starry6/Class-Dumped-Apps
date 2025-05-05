@interface SASettingSetNumber : SASettingSetValue
@property (nonatomic) BOOL increment;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)increment;
- (id)encodedClassName;
- (void)setIncrement:;
+ (id)setNumber;
+ (id)setNumberWithDictionary:context:;
@end
