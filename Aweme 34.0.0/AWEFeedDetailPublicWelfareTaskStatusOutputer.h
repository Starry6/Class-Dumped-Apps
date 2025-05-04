@interface AWEFeedDetailPublicWelfareTaskStatusOutputer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackLogWithEvent:;
- (void)taskDidFinishTask;
- (void)taskDidPauseForReason:;
- (void)taskWillStartTiming;
- (void)taskDidStop;
- (void)taskUpdateProgress:withTotalTime:;
- (void)taskDidFinishReportWithModel:;
- (id)initWithTask:;
- (void)dealloc;
- (void)taskDidStart;
@end
