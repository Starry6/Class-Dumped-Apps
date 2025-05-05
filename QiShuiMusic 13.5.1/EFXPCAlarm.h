@interface EFXPCAlarm : NSObject
@property (nonatomic) EFXPCAlarmScheduler scheduler;
@property (nonatomic) NSObject<OS_dispatch_queue> eventHandlerQueue;
@property (nonatomic) @? eventHandler;
@property (nonatomic) @? test_schedulerObserver;
@property (nonatomic) NSString eventName;
- (void)beginReceivingEventsWithHandler:;
- (id)eventHandlerQueue;
- (id)scheduler;
- (void)setEventHandler:;
- (void)setTest_schedulerObserver:;
- (void)unschedule;
- (id)initWithScheduler:eventName:eventHandlerQueue:;
- (void)eventDidFire:;
- (id)eventHandler;
- (id)eventName;
- (void).cxx_destruct;
- (id)test_schedulerObserver;
- (id)description;
- (void)test_fireEventImmediatelyWithDate:isUserVisible:;
- (void)invalidate;
- (void)setNextFireDate:isUserVisible:;
@end
