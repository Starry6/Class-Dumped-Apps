@interface AWEGrouponDynamicEventCenter : NSObject
@property (nonatomic) NSMutableDictionary subsDict;
- (void)__addObserver;
- (void)__registerBdxSubsriberWithSub:eventName:;
- (id)subsDict;
- (void)__unregisterBdxSubsriberWithSub:eventName:;
- (void)__handleBDXBroadcastNotification:;
- (void)__handleEventWithEventName:params:;
- (void)registerSubscriber:eventName:;
- (void)unregisterSubscriber:eventName:;
- (void)publishHybridEvent:;
- (void)__handleDSLEventNotification:;
- (void)setSubsDict:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
