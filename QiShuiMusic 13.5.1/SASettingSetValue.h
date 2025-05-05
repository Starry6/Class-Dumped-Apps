@interface SASettingSetValue : SASettingCommand
@property (nonatomic) BOOL dryRun;
@property (nonatomic) BOOL failOnSiriDisconnectWarnings;
- (id)groupIdentifier;
- (void)setDryRun:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)dryRun;
- (BOOL)failOnSiriDisconnectWarnings;
- (void)setFailOnSiriDisconnectWarnings:;
+ (id)setValue;
+ (id)setValueWithDictionary:context:;
@end
