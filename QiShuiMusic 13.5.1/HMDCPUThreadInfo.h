@interface HMDCPUThreadInfo : NSObject
@property (nonatomic) I thread;
@property (nonatomic) float usage;
@property (nonatomic) q priority;
@property (nonatomic) q weight;
@property (nonatomic) HMDThreadBacktrace backtrace;
- (id)reportDict;
- (unsigned int)thread;
- (float)usage;
- (id)backtrace;
- (void)setPriority:;
- (long long)weight;
- (void)setWeight:;
- (void).cxx_destruct;
- (void)setUsage:;
- (long long)priority;
- (void)setBacktrace:;
- (void)setThread:;
@end
