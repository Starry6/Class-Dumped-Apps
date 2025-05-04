@interface AWEDiscoverDPlayletPanelRouterManager : NSObject
@property (nonatomic) <AWEDiscoverDPlayletPanelRouterManagerDelegate> delegate;
@property (nonatomic) NSObject<AWEPaymentEventHandlerProtocol><AWEPaymentDetailEventHandlerProtocol> paymentEventHandle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)paymentEventHandle;
- (void)refreshFeedData;
- (void)handlePayEvent:;
- (void)handleLoginEvent:;
- (void)setPaymentEventHandle:;
- (void)routeOrderWithParams:;
- (id)playletVIPPaidPanelExtraParamsHasPaid:;
- (void)routeOrder;
- (void)routeVIP;
- (id)delegate;
- (id)initWithDelegate:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
