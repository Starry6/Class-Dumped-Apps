@interface AWEStudioVideoPublishHelper : NSObject
@property (nonatomic) @? startPublishBlock;
@property (nonatomic) @? endPublishBlock;
@property (nonatomic) AWEPublishBaseTask taskV2;
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) @? completionBlock;
- (void)setEndPublishBlock:;
- (id)publishViewModel;
- (id)endPublishBlock;
- (void)publishStory;
- (void)setPublishViewModel:;
- (void)enqueuePublishTask;
- (id)taskV2;
- (void)setTaskV2:;
- (id)initWithTaskV2:;
- (void)publishWithCompletion:;
- (void)setStartPublishBlock:;
- (void)p_publishIfNeeded;
- (void)enqueuePublishStoryTask;
- (void)excuteTask;
- (void)p_publish;
- (id)initWithStartPublishBlock:endPublishBlock:;
- (id)initWithTaskV2:StartPublishBlock:endPublishBlock:;
- (id)startPublishBlock;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
+ (void)configPublishViewModel:;
@end
