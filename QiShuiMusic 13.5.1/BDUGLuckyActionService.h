@interface BDUGLuckyActionService : NSObject
@property (nonatomic) NSMutableArray timingActions;
@property (nonatomic) NSMutableDictionary actionListeners;
@property (nonatomic) NSMutableDictionary limitTimeActions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actionListeners;
- (id)registerActionListener:actions:;
- (void)onTimerTrigger:;
- (BOOL)__actionA:isChildActionOrSelfOfActionB:;
- (id)__needRemoveAction:;
- (id)limitTimeActions;
- (void)setActionListeners:;
- (void)setLimitTimeActions:;
- (void)setTimingActions:;
- (void)startTiming:;
- (void)startTiming:limitTs:;
- (id)timingActions;
- (void)unregisterActionListener:;
- (id)init;
- (void).cxx_destruct;
- (void)stopTiming:;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
