@interface SACFSignal : SADomainCommand
@property (nonatomic) NSString domain;
@property (nonatomic) NSString flowScriptHint;
@property (nonatomic) NSArray scriptIdentifiers;
@property (nonatomic) SACFAbstractClientCommand signalPayload;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)domain;
- (void)setDomain:;
- (BOOL)mutatingCommand;
- (id)scriptIdentifiers;
- (void)setScriptIdentifiers:;
- (id)flowScriptHint;
- (void)setFlowScriptHint:;
- (id)signalPayload;
- (void)setSignalPayload:;
+ (id)signal;
+ (id)signalWithDictionary:context:;
@end
