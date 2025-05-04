@interface AWEIMBlockOperation : AWEIMCommonOperation
@property (nonatomic) @? runningBlock;
@property (nonatomic) NSString identifier;
- (id)initAsyncTaskWithBlock:;
- (void)run;
- (void)setIdentifier:;
- (id)identifier;
- (void)finish;
- (void).cxx_destruct;
- (id)runningBlock;
- (void)setRunningBlock:;
+ (id)asyncTaskWithBlock:;
@end
