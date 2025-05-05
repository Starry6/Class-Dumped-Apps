@interface InterceptConfig : NSObject
@property (nonatomic) NSInteger interceptLevel;
@property (nonatomic) FigMetalExecutionStatus executionStatus;
@property (nonatomic) BOOL waitUntilCompleted;
@property (nonatomic) BOOL waitUntilScheduled;
- (BOOL)waitUntilScheduled;
- (id)initWithLevel:;
- (void)loadExperimentsConfig;
- (void)setWaitUntilScheduled:;
- (void)setInterceptLevel:;
- (void).cxx_destruct;
- (id)executionStatus;
- (void)setWaitUntilCompleted:;
- (void)setExecutionStatus:;
- (int)interceptLevel;
- (BOOL)waitUntilCompleted;
@end
