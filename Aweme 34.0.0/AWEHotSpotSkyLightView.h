@interface AWEHotSpotSkyLightView : UIView
@property (nonatomic) UIView<HunterContainerProtocol> containerView;
@property (nonatomic) NSString schema;
@property (nonatomic) <HunterContainerLifeCycleProtocol> lifeCycleDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lifeCycleDelegate;
- (void)setLifeCycleDelegate:;
- (double)renderHeight;
- (void)sendGlobalEvent:withParams:;
- (void)sendEvent:withParams:;
- (void)containerLoadFinish;
- (void)loadRawData:extraParams:inController:;
- (void)loadClientData:withRawData:withExtraParams:inController:;
- (void)updateDataWithMode:;
- (void)refreshLynxView:;
- (id)schema;
- (void)setSchema:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (id)containerID;
- (void).cxx_destruct;
- (void)setupUI;
@end
