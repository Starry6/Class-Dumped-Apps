@interface ktrace.KTraceRecorder : NSObject
- (id)init;
+ (BOOL)ktraceRecord:args:error:;
+ (BOOL)listPlansToFile:flags:error:;
@end
