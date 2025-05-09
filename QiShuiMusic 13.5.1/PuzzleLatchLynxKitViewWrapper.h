@interface PuzzleLatchLynxKitViewWrapper : NSObject
@property (nonatomic) <IESLivePiperProtocol> liveBridge;
@property (nonatomic) NSString containerID;
@property (nonatomic) UIView rawView;
@property (nonatomic) PuzzleContext context;
@property (nonatomic) <PuzzleHybridStateCenterProtocol> stateCenter;
@property (nonatomic) Q kernalType;
@property (nonatomic) <IESHYHybridViewLifecycleProtocol> lifecycleDelegate;
@property (nonatomic) NSString liveBusiness;
@property (nonatomic) NSDictionary initialMethodsMap;
@property (nonatomic) BDXThreadSafeDictionary lazyCreateMethodsMap;
@property (nonatomic) <IESLiveHybridContainerDelegate> liveHybridContainerDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rawView;
- (void)setLiveHybridContainerDelegate:;
- (void)setStateCenter:;
- (void)addPiperHandler:;
- (void)addXBridgeMethods;
- (id)currentRequestURL;
- (unsigned long long)kernalType;
- (id)lifecycleDelegate;
- (id)liveBridge;
- (id)liveBusiness;
- (id)liveHybridContainerDelegate;
- (void)registerHandlerBlock:forMethod:authType:;
- (void)secureGoBackWithReachEndBlock:;
- (void)sendEvent:params:;
- (void)setLifecycleDelegate:;
- (void)setLiveBusiness:;
- (void)triggerLayout;
- (BOOL)canGoBack;
- (id)containerID;
- (id)context;
- (void)updateData:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
- (void)loadData;
- (id)stateCenter;
@end
