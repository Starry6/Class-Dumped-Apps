@interface FigMetalExecutionStatus : NSObject
@property (nonatomic) NSMutableArray failedCommandBuffers;
@property (nonatomic) Q status;
@property (nonatomic) NSInteger completedCommandBuffersCount;
- (void)setStatus:;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)status;
- (int)completedCommandBuffersCount;
- (id)failedCommandBuffers;
- (void)setFailedCommandBuffers:;
- (void)setCompletedCommandBuffersCount:;
@end
