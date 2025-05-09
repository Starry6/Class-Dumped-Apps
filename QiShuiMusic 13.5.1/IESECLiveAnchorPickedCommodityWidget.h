@interface IESECLiveAnchorPickedCommodityWidget : IESECLiveBaseWidget
@property (nonatomic) <IESECLiveAnchorGoodsListAdapter> goodsListAdapter;
@property (nonatomic) IESECLiveDurationTracker explainDurationTracker;
@property (nonatomic) NSMutableArray subscribers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)subscribeXBridgeEvent:callback:;
- (void)closePickedCommodityPanel;
- (void)endTrackExplainGoodsDuration;
- (id)explainDurationTracker;
- (id)goodsListAdapter;
- (void)handleCurrentCommodity:completion:;
- (id)initWithRoom:roomContext:;
- (void)messageReceived_IESECLiveCommonMessage:;
- (void)messageReceived_IESECLivePopMessage:;
- (void)messageReceived_IESECLiveSellerMessage:;
- (void)messageReceived_IESECProductUpdateMessage:;
- (void)refreshPickedCommodityPanel:;
- (void)setExplainDurationTracker:;
- (void)setFlashSaleSwitchIsOn:;
- (void)setGoodsListAdapter:;
- (void)setupXBridgeEventSubscriptions;
- (void)showOrderLimitAlertViewWithMessage:;
- (void)showPickedCommodityPanel;
- (void)startTrackExplainGoodsDurationWithGoods:;
- (void)widgetMount;
- (void)widgetUnmount;
- (void).cxx_destruct;
- (id)subscribers;
- (void)messageReceived:;
- (void)setSubscribers:;
@end
