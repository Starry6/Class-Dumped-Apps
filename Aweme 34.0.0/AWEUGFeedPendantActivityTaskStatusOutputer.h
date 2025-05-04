@interface AWEUGFeedPendantActivityTaskStatusOutputer : NSObject
@property (nonatomic) <AWEUGTimeMeterTaskProtocol> task;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)taskDidFinishTask;
- (void)taskDidPauseForReason:;
- (void)taskWillStartTiming;
- (void)taskDidStop;
- (void)taskUpdateProgress:withTotalTime:;
- (void)trackFeedPendantResourceManagerLogWithMessage:;
- (id)initWithTask:;
- (void)setTask:;
- (id)task;
- (void).cxx_destruct;
- (void)taskDidStart;
@end
