@interface SAClientSetupInfo : SABaseClientBoundCommand
@property (nonatomic) BOOL delay;
@property (nonatomic) double threshold;
- (double)threshold;
- (id)groupIdentifier;
- (BOOL)delay;
- (BOOL)requiresResponse;
- (void)setDelay:;
- (id)encodedClassName;
- (void)setThreshold:;
- (BOOL)mutatingCommand;
+ (id)clientSetupInfo;
+ (id)clientSetupInfoWithDictionary:context:;
@end
