@interface HMDCrashThreadInfo : HMDCrashModel
@property (nonatomic) BOOL crashed;
@property (nonatomic) NSArray stackTrace;
@property (nonatomic) HMDCrashRegisters registers;
@property (nonatomic) NSArray frames;
@property (nonatomic) NSString pthreadName;
@property (nonatomic) NSString queueName;
@property (nonatomic) NSString threadName;
- (void)generateFrames:;
- (void)setPthreadName:;
- (id)pthreadName;
- (id)queueName;
- (void)setQueueName:;
- (void)updateWithDictionary:;
- (void).cxx_destruct;
- (id)frames;
- (id)threadName;
- (void)setFrames:;
- (void)setThreadName:;
- (BOOL)crashed;
- (void)setCrashed:;
- (void)setStackTrace:;
- (id)stackTrace;
- (id)registers;
- (void)setRegisters:;
@end
