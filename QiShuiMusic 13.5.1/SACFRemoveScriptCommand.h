@interface SACFRemoveScriptCommand : SABaseClientBoundCommand
@property (nonatomic) NSArray scriptIdentifiers;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)scriptIdentifiers;
- (void)setScriptIdentifiers:;
+ (id)removeScriptCommand;
+ (id)removeScriptCommandWithDictionary:context:;
@end
