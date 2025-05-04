@interface AWETokamakMetricMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__trackHangDiagnostic:;
- (void)__trackCrashDiagnostic:;
- (id)__createJSONContainer:;
- (id)__packageCallStackTree:;
- (void)start;
- (void)didReceiveDiagnosticPayloads:;
- (void)didReceiveMetricPayloads:;
+ (id)sharedInstance;
@end
