@interface HMDAppleBacktracesParameter : HMDThreadBacktraceParameter
@property (nonatomic) BOOL needAllThreads;
@property (nonatomic) Q logType;
@property (nonatomic) NSString exception;
@property (nonatomic) NSString reason;
- (BOOL)needAllThreads;
- (void)setNeedAllThreads:;
- (id)init;
- (unsigned long long)logType;
- (id)reason;
- (void)setReason:;
- (id)exception;
- (void).cxx_destruct;
- (void)setLogType:;
- (void)setException:;
@end
