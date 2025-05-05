@interface AMapBackTrace : NSObject
+ (long long)indexOfThreadTrace:withAddress:;
+ (id)backtraceOfAllThread;
+ (id)backtraceOfNSThread:;
+ (void)catchMainThreadID;
+ (id)formartCmdtrace:;
+ (id)formartThreadTrace:index:;
+ (id)formartTrace:;
+ (id)serializeBackTrace:;
+ (id)serializeThreadTrace:;
+ (long long)setCrashMachTread:whitBacktrace:;
+ (long long)setCrashTread:whitBacktrace:;
@end
