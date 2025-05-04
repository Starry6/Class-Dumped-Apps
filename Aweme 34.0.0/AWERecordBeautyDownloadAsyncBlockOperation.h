@interface AWERecordBeautyDownloadAsyncBlockOperation : NSOperation
@property (nonatomic) @? block;
@property (nonatomic) NSString taskName;
- (BOOL)isAsynchronous;
- (void)setFinished:;
- (BOOL)isExecuting;
- (id)initWithBlock:;
- (void)cancel;
- (void)setTaskName:;
- (id)taskName;
- (id)block;
- (void)setBlock:;
- (void)finish;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)setExecuting:;
- (void)start;
@end
