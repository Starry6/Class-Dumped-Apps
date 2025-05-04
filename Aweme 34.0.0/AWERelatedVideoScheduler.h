@interface AWERelatedVideoScheduler : NSObject
@property (nonatomic) NSMutableDictionary blockArrayMap;
@property (nonatomic) NSMutableDictionary highPriorityBlockArrayMap;
@property (nonatomic) NSMutableDictionary controlMap;
@property (nonatomic) NSMutableDictionary timerMap;
- (id)timerMap;
- (void)setTimerMap:;
- (void)createTaskQueue:;
- (BOOL)submitTask:toQueue:;
- (id)blockArrayMap;
- (id)highPriorityBlockArrayMap;
- (id)controlMap;
- (BOOL)submitTask:isHighPriority:toQueue:;
- (void)executeWithQueueName:;
- (void)setQueueStatus:toQueue:;
- (void)setBlockArrayMap:;
- (void)setHighPriorityBlockArrayMap:;
- (void)setControlMap:;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)createTimer:;
@end
