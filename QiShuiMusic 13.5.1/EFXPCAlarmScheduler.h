@interface EFXPCAlarmScheduler : NSObject
@property (nonatomic) @? test_schedulerObserver;
- (id)ef_publicDescription;
- (id)initForTesting;
- (void)removeAlarm:;
- (void)_queue_notifyAlarmsOfPendingEvents;
- (void)_queue_scheduleEvent:;
- (id)debugDescription;
- (void)test_fireEvent:;
- (void)setTest_schedulerObserver:;
- (void)addAlarm:;
- (void)_queue_handleXPCEvent:;
- (void)_queue_unscheduleEventWithName:;
- (void).cxx_destruct;
- (void)scheduleEvent:;
- (void)_queue_handleEvent:;
- (id)test_schedulerObserver;
- (id)description;
- (id)_init;
- (void)unscheduleEventWithName:;
- (id)initGlobalInstance;
+ (id)log;
@end
