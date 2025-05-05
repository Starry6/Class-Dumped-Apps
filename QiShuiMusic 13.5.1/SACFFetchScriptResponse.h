@interface SACFFetchScriptResponse : SABaseClientBoundCommand
@property (nonatomic) NSArray flowScripts;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)flowScripts;
- (void)setFlowScripts:;
+ (id)fetchScriptResponse;
+ (id)fetchScriptResponseWithDictionary:context:;
@end
