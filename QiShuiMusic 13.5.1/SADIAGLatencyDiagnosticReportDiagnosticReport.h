@interface SADIAGLatencyDiagnosticReportDiagnosticReport : AceObject
@property (nonatomic) NSNumber latency;
@property (nonatomic) NSURL uri;
@property (nonatomic) NSString verb;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)latency;
- (void)setLatency:;
- (id)uri;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setUri:;
- (id)verb;
- (void)setVerb:;
+ (id)latencyDiagnosticReportDiagnosticReport;
+ (id)latencyDiagnosticReportDiagnosticReportWithDictionary:context:;
@end
