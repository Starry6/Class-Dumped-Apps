@interface TSPKEventManager : NSObject
@property (nonatomic) NSMutableDictionary registerSubscibers;
@property (nonatomic) <TSPKLock> lock;
- (void)registerSubsciber:onEventId:;
- (id)registerSubscibers;
- (void)setRegisterSubscibers:;
- (id)subscribersOnEventId:;
- (void)unregisterSubsciber:onEventId:;
- (void)unregisterSubscribersWithJudgeBlock:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)getHandleResultFromSubscibers:event:;
+ (void)registerSubsciber:onEventId:;
+ (void)registerSubsciber:onEventType:;
+ (void)registerSubsciber:onEventType:apiType:;
+ (void)registerSubsciber:onEventType:apiTypes:;
+ (void)unregisterSubsciber:onEventId:;
+ (void)unregisterSubsciber:onEventType:;
+ (void)unregisterSubsciber:onEventType:apiType:;
+ (void)unregisterSubsciber:onEventType:apiTypes:;
+ (void)unregisterSubscribersWithJudgeBlock:;
+ (id)sharedManager;
+ (id)dispatchEvent:;
@end
