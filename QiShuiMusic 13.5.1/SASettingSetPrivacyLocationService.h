@interface SASettingSetPrivacyLocationService : SASettingSetBool
@property (nonatomic) BOOL userConfirmed;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)userConfirmed;
- (void)setUserConfirmed:;
+ (id)setPrivacyLocationService;
+ (id)setPrivacyLocationServiceWithDictionary:context:;
@end
