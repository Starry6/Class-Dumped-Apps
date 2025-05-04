@interface AWELivePlaybackPosterPublishProgressFragment : IESLivePlaybackComponent
@property (nonatomic) AWELivePosterPublishProgressView progressView;
@property (nonatomic) NSString taskId;
@property (nonatomic) BOOL isBeginWithDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didAppendWithInfo:;
- (void)task:didEndWithResult:error:;
- (void)task:progressDidChangeWithInfo:;
- (void)componentCreate;
- (void)publishTaskId:;
- (BOOL)isCurrentPublishTaskWithTask:;
- (BOOL)isBeginWithDelegate;
- (void)setIsBeginWithDelegate:;
- (void)dealloc;
- (id)progressView;
- (void)setProgressView:;
- (void).cxx_destruct;
- (id)taskId;
- (void)setTaskId:;
@end
