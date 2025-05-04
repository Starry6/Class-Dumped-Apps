@interface AWEDiversionActiveUserTaskStatusOutputer : NSObject
@property (nonatomic) <AWEUGTimeMeterTaskProtocol> task;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)taskDidFinishTask;
- (void)taskDidPauseForReason:;
- (void)taskWillStartTiming;
- (void)taskUpdateProgress:withTotalTime:;
- (void)trackLogWithMessage:;
- (id)initWithTask:;
- (void)setTask:;
- (id)task;
- (void).cxx_destruct;
- (void)taskDidStart;
@end
