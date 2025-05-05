@interface ENAsyncReducer : NSObject
@property (nonatomic) NSArray input;
@property (nonatomic) CUTResult result;
@property (nonatomic) @? completionBlock;
@property (nonatomic) @? reducerBlock;
- (id)result;
- (id)input;
- (void)setCompletionBlock:;
- (void)setInput:;
- (void).cxx_destruct;
- (id)completionBlock;
- (void)setResult:;
- (void)_completeWithResult:;
- (id)initWithInput:initialValue:;
- (void)reduceWithCompletion:;
- (void)setReducerBlock:;
- (void)_reduceWithPending:visited:currentResult:completion:;
- (id)reducerBlock;
@end
