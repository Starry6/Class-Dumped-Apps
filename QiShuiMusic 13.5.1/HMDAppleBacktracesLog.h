@interface HMDAppleBacktracesLog : NSObject
+ (id)getAllThreadsLogByKeyThread:maxThreadCount:skippedDepth:logType:suspend:exception:reason:;
+ (void)getAllThreadsLogByKeyThread:maxThreadCount:skippedDepth:logType:suspend:exception:reason:callback:;
+ (id)getAllThreadsLogByKeyThread:skippedDepth:logType:;
+ (id)getAllThreadsLogByKeyThread:skippedDepth:logType:exception:reason:;
+ (id)getAllThreadsLogBySkippedDepth:logType:;
+ (void)getAsyncThreadLogByParameter:callback:;
+ (id)getCurrentThreadLogBySkippedDepth:logType:;
+ (id)getMainThreadLogBySkippedDepth:logType:;
+ (id)getThreadLog:BySkippedDepth:logType:;
+ (id)getThreadLogByParameter:;
+ (void)getThreadLogByParameter:callback:;
+ (id)getThreadLogByThread:skippedDepth:logType:suspend:exception:reason:;
+ (void)getThreadLogByThread:skippedDepth:logType:suspend:exception:reason:callback:;
+ (id)logWithBacktraces:type:exception:reason:;
+ (unsigned int)mainThread;
+ (unsigned int)currentThread;
@end
