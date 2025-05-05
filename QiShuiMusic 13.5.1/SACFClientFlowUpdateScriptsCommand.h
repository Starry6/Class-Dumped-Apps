@interface SACFClientFlowUpdateScriptsCommand : SABaseClientBoundCommand
@property (nonatomic) NSArray scripts;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)scripts;
- (void)setScripts:;
+ (id)clientFlowUpdateScriptsCommand;
+ (id)clientFlowUpdateScriptsCommandWithDictionary:context:;
@end
