@interface SASettingSetAppearance : SASettingSetValue
@property (nonatomic) NSString appearance;
- (id)groupIdentifier;
- (void)setAppearance:;
- (id)appearance;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)setAppearance;
+ (id)setAppearanceWithDictionary:context:;
@end
