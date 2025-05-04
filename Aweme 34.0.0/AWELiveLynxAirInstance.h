@interface AWELiveLynxAirInstance : NSObject
@property (nonatomic) <IESLiveLynxAirLifecycleProtocol> lifecycleDelegate;
@property (nonatomic) <IESLiveGeckoService> geckoService;
@property (nonatomic) UIView<AnnieXContainerBaseProtocol> cardView;
@property (nonatomic) <AnnieXCardModelProtocol> cardModel;
@property (nonatomic) NSMutableDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didFinishLoadWithURL:;
- (void)container:didLoadFailedWithUrl:error:;
- (void)containerDidFirstScreen:;
- (id)trackParams;
- (void)setTrackParams:;
- (id)cardModel;
- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:;
- (void)registerLocalMethod:;
- (void)bindData:;
- (void)setCardModel:;
- (id)createLynxAirViewWithUrl:data:fitSize:lifecycleDelegate:;
- (id)geckoService;
- (void)setGeckoService:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
@end
