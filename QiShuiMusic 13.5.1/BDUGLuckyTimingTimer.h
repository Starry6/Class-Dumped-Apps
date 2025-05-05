@interface BDUGLuckyTimingTimer : NSObject
@property (nonatomic) NSMutableArray timerTriggerListeners;
@property (nonatomic) NSTimer timer;
@property (nonatomic) double callbackInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)unregisterTimerTriggerListener:;
- (void)__countTime;
- (void)__dismissTaskTimer;
- (void)__setupTaskTimer;
- (void)registerTimerTriggerListener:;
- (void)setTimerTriggerListeners:;
- (id)timerTriggerListeners;
- (id)init;
- (void)dealloc;
- (double)callbackInterval;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (void)setCallbackInterval:;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
