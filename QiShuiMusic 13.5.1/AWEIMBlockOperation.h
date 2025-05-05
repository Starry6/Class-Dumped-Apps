@interface AWEIMBlockOperation : AWEIMCommonOperation
@property (nonatomic) @? runningBlock;
- (id)initAsyncTaskWithBlock:;
- (id)runningBlock;
- (void)setRunningBlock:;
- (void)finish;
- (void)run;
- (void).cxx_destruct;
+ (id)asyncTaskWithBlock:;
@end
