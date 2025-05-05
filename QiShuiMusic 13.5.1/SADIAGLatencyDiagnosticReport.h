@interface SADIAGLatencyDiagnosticReport : SABaseCommand
@property (nonatomic) NSArray diagnosticReports;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)diagnosticReports;
- (void)setDiagnosticReports:;
+ (id)latencyDiagnosticReport;
+ (id)latencyDiagnosticReportWithDictionary:context:;
@end
