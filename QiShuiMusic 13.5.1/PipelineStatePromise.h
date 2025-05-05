@interface PipelineStatePromise : NSObject
- (void).cxx_destruct;
- (id)initWithDispatchGroup:pipelineStates:errors:;
- (BOOL)timesOutWaitingForPipelineStates:;
- (BOOL)groupWasSuccessful;
- (id)pipelineStateForFunction:;
- (id)errorForFunction:;
@end
