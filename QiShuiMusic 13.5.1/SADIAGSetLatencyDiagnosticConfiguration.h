@interface SADIAGSetLatencyDiagnosticConfiguration : SABaseClientBoundCommand
@property (nonatomic) NSArray diagnosticActions;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)diagnosticActions;
- (void)setDiagnosticActions:;
+ (id)setLatencyDiagnosticConfiguration;
+ (id)setLatencyDiagnosticConfigurationWithDictionary:context:;
@end
