@interface SADomainCommand : SABaseClientBoundCommand
@property (nonatomic) NSURL targetAppId;
@property (nonatomic) NSURL targetPluginId;
@property (nonatomic) NSNumber timeout;
- (id)groupIdentifier;
- (void)setTimeout:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)timeout;
- (id)targetAppId;
- (void)setTargetAppId:;
- (id)targetPluginId;
- (void)setTargetPluginId:;
+ (id)domainCommand;
+ (id)domainCommandWithDictionary:context:;
@end
