@interface SADIAGSetLatencyDiagnosticConfigurationDiagnosticAction : AceObject
@property (nonatomic) NSURL uri;
@property (nonatomic) NSString verb;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uri;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setUri:;
- (id)verb;
- (void)setVerb:;
+ (id)setLatencyDiagnosticConfigurationDiagnosticAction;
+ (id)setLatencyDiagnosticConfigurationDiagnosticActionWithDictionary:context:;
@end
