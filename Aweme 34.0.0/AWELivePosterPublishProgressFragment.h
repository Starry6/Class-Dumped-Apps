@interface AWELivePosterPublishProgressFragment : IESLiveRoomComponent
@property (nonatomic) AWELivePosterPublishProgressView progressView;
@property (nonatomic) NSString taskId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didAppendWithInfo:;
- (void)task:didEndWithResult:error:;
- (void)task:progressDidChangeWithInfo:;
- (void)componentMount;
- (void)componentCreate;
- (void)publishTaskId:;
- (BOOL)isCurrentPublishTaskWithTask:;
- (void)dealloc;
- (id)progressView;
- (void)setProgressView:;
- (void).cxx_destruct;
- (id)taskId;
- (void)setTaskId:;
+ (BOOL)componentShouldActive:;
+ (BOOL)isBusinessLiveRoomWithRoom:;
@end
