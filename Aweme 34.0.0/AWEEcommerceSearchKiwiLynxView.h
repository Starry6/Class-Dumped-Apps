@interface AWEEcommerceSearchKiwiLynxView : AWEEcommerceSearchLynxBaseView
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
@property (nonatomic) @? kiwiExpandBottomBlock;
@property (nonatomic) @? lynxViewLoadFinished;
@property (nonatomic) BOOL isFirstShow;
@property (nonatomic) BOOL isFromECommerce;
- (void)setIsFirstShow:;
- (BOOL)isFirstShow;
- (BOOL)isFromECommerce;
- (void)setIsFromECommerce:;
- (id)initWithShouldReuseLynxView:;
- (void)subscribeBridgeEvent;
- (void)unsubscribeBridgeEvent;
- (id)lynxViewLoadFinished;
- (id)kiwiExpandBottomBlock;
- (void)updateWithModel:logData:extraParams:;
- (void)lynxEngineDidMount:;
- (void)lynxEngineDidUpdate:;
- (void)lynxEngine:didFailLoadWithError:;
- (void)setKiwiExpandBottomBlock:;
- (void)setLynxViewLoadFinished:;
- (void)dealloc;
- (id)subscriber;
- (void)setSubscriber:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
