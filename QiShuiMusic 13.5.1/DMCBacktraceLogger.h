@interface DMCBacktraceLogger : NSObject
@property (nonatomic) I trackedThread;
- (void)trackCurrentThread;
- (unsigned int)trackedThread;
- (void)setTrackedThread:;
- (id)getBacktraceFromTrackedThread;
+ (id)callerOfCurrentMethod;
+ (BOOL)dumpStackshotToPath:fileName:;
+ (id)_getBacktraceFromThread:bufferSize:;
+ (id)_getThreadStateForThread:;
+ (unsigned long long)_getPCFromThreadState:;
+ (unsigned long long)_getLRFromThreadState:;
+ (unsigned long long)_getFPFromThreadState:;
+ (BOOL)_copyFrameInformation:destination:size:;
+ (void)_symbolicateBuffer:symbolsBuffer:count:;
+ (id)_logWithSymbol:address:index:;
@end
