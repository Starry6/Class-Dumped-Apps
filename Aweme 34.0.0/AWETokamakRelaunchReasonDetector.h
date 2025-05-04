@interface AWETokamakRelaunchReasonDetector : NSObject
- (void)onAppWillTerminate:;
- (void)onHMDOOMCrashDetectionFinished:;
- (void)onHMDOOMCrashDetectionFinished_I:;
- (BOOL)shouldReportByReason:;
- (void)onTrackerReady;
- (void)queryReason:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
+ (id)shared;
@end
