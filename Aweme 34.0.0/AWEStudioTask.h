@interface AWEStudioTask : NSObject
@property (nonatomic) @ inputData;
@property (nonatomic) @? precheck;
@property (nonatomic) @? execution;
@property (nonatomic) @ preExecuteInfo;
@property (nonatomic) @? preExecute;
- (id)precheck;
- (id)initWithExecution:;
- (id)initWithExecution:promises:;
- (id)writeInfo:;
- (id)initWithExecution:promises:inputData:;
- (void)setPreExecuteInfo:;
- (void)setPreExecute:;
- (id)preExecute;
- (id)preExecuteInfo;
- (id)preExecuteInfo:;
- (void)setPrecheck:;
- (void)setExecution:;
- (void)execute:;
- (void).cxx_destruct;
- (id)inputData;
- (void)setInputData:;
- (id)execution;
@end
