@interface AWEPOIDetailBdxNotificationUtil : NSObject
@property (nonatomic) NSMutableDictionary subscriberDict;
@property (nonatomic) DitoGeneralContainerPageContext<AWEPOIUGCRateContextProtocol> context;
- (void)handleLynxBroadcastNotification:;
- (void)unregisterBDXSubscriber;
- (void)subscribeBDXWithEventName:callback:;
- (id)subscriberDict;
- (void)setSubscriberDict:;
- (void)bindStateAndAction;
- (void)subscribeUgcBDXEvent;
- (void)subscribeRateWithEventName:;
- (void)subscribeLikeRateEvent;
- (id)init;
- (void)dealloc;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
