@interface AWELiveLifeLynxView : AWEPOICubeView
@property (nonatomic) NSMapTable timerMap;
@property (nonatomic) AWELiveXBridgeEventSubscriber skuAddCartSubscriber;
@property (nonatomic) AWELiveXBridgeEventSubscriber addshoppingCartAnimationSubscriber;
@property (nonatomic) AWELiveXBridgeEventSubscriber shoppingCartChangedSubscriber;
@property (nonatomic) AWELiveLifeBridgeRegister bridgeRegister;
@property (nonatomic) NSNumber liveLifeGeckoVersion;
@property (nonatomic) UIResponder btmResponder;
- (id)bridgeRegister;
- (void)setBtmResponder:;
- (id)timerMap;
- (id)aAWEPadBizUIAdapter;
- (void)handleJSBroadcast:;
- (id)btmResponder;
- (void)setupBizBeforeCreateLynxView;
- (id)nativeModuleClasses;
- (id)bizCustomUIElementsConfigs;
- (id)initWithFrame:cubeModel:extraParams:delegate:bridgeRegister:;
- (void)setLiveLifeGeckoVersion:;
- (id)liveLifeGeckoVersion;
- (void)setSkuAddCartSubscriber:;
- (void)setAddshoppingCartAnimationSubscriber:;
- (void)setShoppingCartChangedSubscriber:;
- (id)skuAddCartSubscriber;
- (id)addshoppingCartAnimationSubscriber;
- (id)shoppingCartChangedSubscriber;
- (void)dealloc;
- (void).cxx_destruct;
+ (Class)aAWEPadBizUIAdapterClass;
@end
