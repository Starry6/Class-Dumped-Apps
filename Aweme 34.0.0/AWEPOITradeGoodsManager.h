@interface AWEPOITradeGoodsManager : NSObject
@property (nonatomic) NSObject<AWEDynamicCardContextProtocol> dynamicCardContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preloadConcernGoodsCardWithDataArray:fromIndex:dataSourceCount:fetchType:;
- (void)showGoodsServiceUnsubscribePopupViewWithAwemeModel:;
- (id)generateShareWebPOIGoodsModelWithAweme:;
- (id)generateShareWebPOIGoodsModelForContextTargetWithAweme:;
- (void)dislikePOIGoodsCardWithAweme:;
- (void)updateGoodsSubscribeStatusWithOperation:forUser:completionHandler:;
- (id)aweNearbyModuleService;
- (long long)mapSubscribeStatus:;
- (id)imExtra:;
- (void)removeDCardInFeedFromDataArray:withFetchType:dataSourceCount:;
- (id)dynamicCardContext;
- (void)getSubscribeGoodsSettingStatusCompletion:;
- (void)sendLongPressPanelEventWithEvent:params:;
- (void)setDynamicCardContext:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
