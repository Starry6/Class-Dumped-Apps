@interface AWETaskSpreadExecutionContext : NSObject
@property (nonatomic) AWETaskSpreadMetaTask executingTask;
@property (nonatomic) @ taskInfo;
@property (nonatomic) BOOL endExecution;
@property (nonatomic) BOOL skipMetaTaskOnce;
@property (nonatomic) BOOL skipTaskOnce;
- (void)setEndExecution:;
- (void)setSkipMetaTaskOnce:;
- (void)setSkipTaskOnce:;
- (void)stopExecution;
- (void)skipTask;
- (id)executingTask;
- (void)setExecutingTask:;
- (BOOL)endExecution;
- (BOOL)skipMetaTaskOnce;
- (BOOL)skipTaskOnce;
- (void).cxx_destruct;
- (id)taskInfo;
- (void)skip;
- (void)setTaskInfo:;
@end
