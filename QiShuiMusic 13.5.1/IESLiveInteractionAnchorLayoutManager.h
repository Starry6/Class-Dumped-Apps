@interface IESLiveInteractionAnchorLayoutManager : NSObject
@property (nonatomic) IESLiveInteractionLayout prevLayout;
@property (nonatomic) IESLiveInteractionLayout currLayout;
@property (nonatomic) IESLiveInteractionLayout switchingLayout;
@property (nonatomic) BOOL isSwitching;
@property (nonatomic) BOOL hitSwitchSceneControl;
@property (nonatomic) q hitSwitchSceneCount;
@property (nonatomic) IESLiveCountTimer switchSceneFirstPartTimer;
@property (nonatomic) IESLiveCountTimer switchSceneSecondPartTimer;
@property (nonatomic) IESLiveInteractionLayoutChangePublisher publisher;
@property (nonatomic) IESLiveInteractionLayoutChangePublisher willChangePublisher;
@property (nonatomic) IESLiveInteractionLayoutManagerConfig anchorConfig;
@property (nonatomic) HTSLiveInteractiveAPI api;
@property (nonatomic) @? extraEventBuilderBlock;
@property (nonatomic) Q moduleName;
@property (nonatomic) <IESLiveInteractionLayoutManagerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) IESLiveInteractionLayoutManagerConfig config;
- (void)setIsSwitching:;
- (id)switchingLayout;
- (id)anchorConfig;
- (id)currLayout;
- (id)currentLayoutFromServer;
- (void)didSetAttachingDIContext;
- (id)extraEventBuilderBlock;
- (void)handleReceivedLinkerBaseInfo:;
- (void)handleReceivedSwitchSceneMessage:completion:;
- (void)handleReceivedUILayoutChangedMessage:completion:;
- (BOOL)hitSwitchSceneControl;
- (long long)hitSwitchSceneCount;
- (void)hitSwitchSceneFrequency;
- (BOOL)isSwitchingLayout;
- (void)onCurrentLayoutCanvasDidUpdatedUsingBlock:;
- (void)onCurrentLayoutCanvasWillUpdateUsingBlock:;
- (void)onCurrentLayoutDidChangedUsingBlock:;
- (id)onCurrentLayoutDidChangedWithSubscriptionUsingBlock:;
- (void)onCurrentLayoutWillChangedUsingBlock:;
- (id)onCurrentLayoutWillChangedWithSubscriptionUsingBlock:;
- (void)p_handleReceivedMessage:toLayout:completion:;
- (void)p_trackLayoutChangedFrom:to:;
- (id)prevLayout;
- (id)previousLayout;
- (void)reloadCurrentLayoutWithCompletion:;
- (void)setAnchorConfig:;
- (void)setCurrLayout:;
- (void)setExtraEventBuilderBlock:;
- (void)setHitSwitchSceneControl:;
- (void)setHitSwitchSceneCount:;
- (void)setModuleName:;
- (void)setPrevLayout:;
- (void)setSwitchSceneFirstPartTimer:;
- (void)setSwitchSceneSecondPartTimer:;
- (void)setSwitchingLayout:;
- (void)setWillChangePublisher:;
- (void)setupWithInitialLayout:;
- (void)startLayoutWithStartContext:enterFrom:source:completion:;
- (void)switchLayout:completion:;
- (void)switchLayout:extra:completion:;
- (void)switchLayout:extra:force:completion:;
- (void)switchLayout:extra:source:force:completion:;
- (void)switchLayoutFrom:toLayout:extra:source:force:completion:;
- (void)switchLayoutWithResponseFrom:to:extra:source:isForce:completion:;
- (id)switchSceneFirstPartTimer;
- (id)switchSceneSecondPartTimer;
- (void)trackEvent:params:;
- (void)updateCurrentLayoutTo:completion:;
- (id)willChangePublisher;
- (void)dealloc;
- (id)publisher;
- (void)dispose;
- (void)setConfig:;
- (void)setDelegate:;
- (id)currentLayout;
- (void)setPublisher:;
- (unsigned long long)moduleName;
- (id)delegate;
- (void).cxx_destruct;
- (id)config;
- (id)eventContext;
- (BOOL)isSwitching;
- (id)api;
- (void)clean;
- (void)setApi:;
@end
