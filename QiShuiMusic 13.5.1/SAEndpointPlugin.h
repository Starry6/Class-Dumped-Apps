@interface SAEndpointPlugin : SAEndpoint
@property (nonatomic) NSString pluginPath;
- (id)groupIdentifier;
- (id)pluginPath;
- (id)encodedClassName;
- (void)setPluginPath:;
+ (id)endpointPlugin;
+ (id)endpointPluginWithDictionary:context:;
@end
