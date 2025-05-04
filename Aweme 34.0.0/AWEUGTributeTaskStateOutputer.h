@interface AWEUGTributeTaskStateOutputer : NSObject
@property (nonatomic) <AWEUGTimeMeterTaskProtocol> task;
@property (nonatomic) <AWEUGTributeTimingManagerProtocol> tributeTimingManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)taskDidFinishTask;
- (void)taskDidPauseForReason:;
- (void)taskWillStartTiming;
- (void)taskDidStop;
- (void)taskUpdateProgress:withTotalTime:;
- (id)tributeTimingManager;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (void)trackLogWithMessage:;
- (void)setTributeTimingManager:;
- (id)initWithTask:;
- (void)setTask:;
- (id)task;
- (void).cxx_destruct;
- (void)taskDidStart;
+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
@end
