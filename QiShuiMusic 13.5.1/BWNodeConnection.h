@interface BWNodeConnection : NSObject
@property (nonatomic) BWNodeInput input;
@property (nonatomic) BWNodeOutput output;
@property (nonatomic) BWPipelineStage pipelineStage;
@property (nonatomic) BOOL wantsMessageCachingWhileSuspended;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)output;
- (id)input;
- (BOOL)detach;
- (void)consumeMessage:fromOutput:;
- (void)dealloc;
- (void)suspendWithMessageCachingAllowed:;
- (BOOL)attach;
- (BOOL)wantsMessageCachingWhileSuspended;
- (void)setWantsMessageCachingWhileSuspended:;
- (BOOL)resolveCommonBufferFormat;
- (id)initWithOutput:input:pipelineStage:;
- (void)resumeForEventsOnly:;
- (id)pipelineStage;
@end
