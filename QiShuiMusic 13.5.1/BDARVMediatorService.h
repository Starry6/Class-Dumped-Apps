@interface BDARVMediatorService : NSObject
@property (nonatomic) NSDictionary systemInfoDictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)eventV3:params:isDoubleSending:;
- (void)trackAdEvent:tag:extra:adExtra:;
- (void)_checkIMPConformToProtocol;
- (void)_commonConfig;
- (void)addMessageSubscriberLiveWithMessage:;
- (void)bindLiveInnerPendantInitEvent:;
- (void)bindLiveInnerWidgetProgressEvent:;
- (void)bindLiveShortCutEvent:;
- (void)cardViewContainer:dislikeAction:adInfo:;
- (void)clearGeckoResource;
- (void)clickEventData:type:;
- (unsigned long long)clipboardAndPersistenceToken:params:;
- (void)connectLiveWithRoomID:scene:params:;
- (id)createLivePlayViewWithInfo:;
- (id)darkModeColorWithOriginalColor:alpha:;
- (void)disconnectWithLive:;
- (id)dislikeParams;
- (void)eventData:;
- (void)eventRewardData:;
- (void)frequencyControlBroadcastToHost:;
- (long long)getOHRStatus;
- (BOOL)handleActionWithParams:;
- (BOOL)handleAppStoreActionModel:;
- (id)inspireRequestExtraParams;
- (void)livePlayerStatus:;
- (void)loadLivePlayViewWithInfo:;
- (id)loadSpliceViewWithInfo:;
- (void)monitorService:value:category:extra:;
- (void)notifyLiveReachBonusTimeWithInfo:;
- (void)openAdShoppingWithURL:info:;
- (void)openDetailWithParams:;
- (void)openH5WithParams:;
- (void)openLive:lynxUI:completion:;
- (BOOL)openWebviewWithParams:;
- (void)originalVideoInfo:;
- (void)performanceEventV3:params:;
- (void)preloadAppStoreWithInfo:;
- (void)preloadFormWithInfo:;
- (id)preloadLiteWebViewWithModel:;
- (void)preloadLynxLandingWithInfo:;
- (void)preloadMPWithInfo:;
- (void)preloadResource:payload:;
- (void)renderTintColorWithTargetView:targetColor:;
- (id)requestHost;
- (BOOL)rewardVideoAdOpenAppWithParam:;
- (void)sendMessageToFeBlock:;
- (BOOL)setAmbientCategoryWithPlayer:;
- (void)setSystemInfoDictionary:;
- (id)systemInfoDictionary;
- (void)trackURLs:event:;
- (id)videoEngineOptionsWithConfig:;
- (id)init;
- (void).cxx_destruct;
+ (id)mcc_mnc;
+ (id)ntType;
+ (id)protocolImp;
+ (id)rewardProtocolImp;
+ (id)channel;
+ (id)uid;
+ (id)sharedInstance;
+ (id)appName;
+ (id)deviceID;
+ (id)appid;
+ (id)carrier;
@end
