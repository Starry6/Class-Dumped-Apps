@interface EFAutoBugCaptureReporter : NSObject
@property (nonatomic) SDRDiagnosticReporter diagnosticReporter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)reportIssueType:description:;
- (id)diagnosticReporter;
- (void)setDiagnosticReporter:;
+ (id)sharedReporter;
+ (id)log;
@end
