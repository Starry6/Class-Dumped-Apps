@interface SASetContextConfiguration : SABaseClientBoundCommand
@property (nonatomic) q contextTimeoutSeconds;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (long long)contextTimeoutSeconds;
- (void)setContextTimeoutSeconds:;
+ (id)setContextConfiguration;
+ (id)setContextConfigurationWithDictionary:context:;
@end
