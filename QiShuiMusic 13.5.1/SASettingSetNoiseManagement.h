@interface SASettingSetNoiseManagement : SASettingSetValue
@property (nonatomic) NSString noiseManagementOption;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)noiseManagementOption;
- (void)setNoiseManagementOption:;
+ (id)setNoiseManagement;
+ (id)setNoiseManagementWithDictionary:context:;
@end
