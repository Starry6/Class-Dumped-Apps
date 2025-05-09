@interface AWEPaymentEventManager : NSObject
@property (nonatomic) NSPointerArray cachedHandlers;
@property (nonatomic) BDXBridgeEventSubscriber paymentSubscriber;
@property (nonatomic) BDXBridgeEventSubscriber loginSubscriber;
@property (nonatomic) BDXBridgeEventSubscriber payPanelVisitRecallSubscriber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLoginSubscriber:;
- (id)loginSubscriber;
- (void)setPaymentSubscriber:;
- (id)paymentSubscriber;
- (void)setPayPanelVisitRecallSubscriber:;
- (id)payPanelVisitRecallSubscriber;
- (void)responseToEvent:responseModel:;
- (BOOL)canResponseToEvent:responseModel:containerID:;
- (void)addSubscribers;
- (id)cachedHandlers;
- (id)awemeParamsForPayParams:;
- (BOOL)shouldUseNewRefreshForEventType:responseModel:;
- (void)refreshWithEventType:responseModel:handler:;
- (void)addPaymentSubscriber;
- (void)addLoginSubscriber;
- (void)responseToEvent:params:;
- (void)setCachedHandlers:;
- (id)init;
- (void)addEventHandler:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
