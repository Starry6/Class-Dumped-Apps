@interface MLE5ExecutionStream : NSObject
@property (nonatomic) ^{e5rt_execution_stream=} streamHandle;
@property (nonatomic) NSArray operations;
- (id)operations;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setOperations:;
- (void)reset;
- (BOOL)executeAndReturnError:;
- (BOOL)_executeStream:error:;
- (id)streamHandle;
- (void)setStreamHandle:;
@end
