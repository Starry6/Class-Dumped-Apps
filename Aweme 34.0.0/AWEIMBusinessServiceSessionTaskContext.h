@interface AWEIMBusinessServiceSessionTaskContext : NSObject
@property (nonatomic) BFTaskCompletionSource task;
@property (nonatomic) AWEIMChatModel chatModel;
- (id)chatModel;
- (void)setChatModel:;
- (void)setTask:;
- (id)task;
- (void).cxx_destruct;
@end
