@interface SAIntentGroupSiriKitPluginSignal : SABaseClientBoundCommand
@property (nonatomic) NSString bundleIdentifier;
- (id)bundleIdentifier;
- (id)groupIdentifier;
- (id)initWithBundleIdentifier:;
- (BOOL)requiresResponse;
- (void)setBundleIdentifier:;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
@end
