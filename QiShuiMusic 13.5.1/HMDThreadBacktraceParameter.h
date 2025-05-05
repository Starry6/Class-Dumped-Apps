@interface HMDThreadBacktraceParameter : NSObject
@property (nonatomic) I keyThread;
@property (nonatomic) BOOL isGetMainThread;
@property (nonatomic) Q maxThreadCount;
@property (nonatomic) Q skippedDepth;
@property (nonatomic) BOOL suspend;
@property (nonatomic) BOOL needDebugSymbol;
- (BOOL)isGetMainThread;
- (BOOL)needDebugSymbol;
- (unsigned int)keyThread;
- (void)setIsGetMainThread:;
- (void)setKeyThread:;
- (void)setNeedDebugSymbol:;
- (void)setSkippedDepth:;
- (unsigned long long)skippedDepth;
- (id)init;
- (BOOL)suspend;
- (void)setMaxThreadCount:;
- (unsigned long long)maxThreadCount;
- (void)setSuspend:;
@end
