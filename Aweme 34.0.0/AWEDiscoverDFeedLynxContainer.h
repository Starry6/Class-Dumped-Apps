@interface AWEDiscoverDFeedLynxContainer : AWEBottomContainerBaseView
@property (nonatomic) UIView<AWEDiscoverDHorizontalViewProtocol> horizontalView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEDiscoverDHorizontalLynxCard card;
@property (nonatomic) BOOL hasUpdateData;
@property (nonatomic) double loadStartTime;
@property (nonatomic) <AWEBottomContainerViewLifeCycleDelegate> lifeCycleDelegate;
@property (nonatomic) BOOL useNewLifeCycleMethod;
@property (nonatomic) <AWEFeedDynamicCardManagerProtocol> cardManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)videoWillPlay;
- (void)videoWillStop;
- (id)generateContext;
- (id)customerComponentKeyClassPairToRegister;
- (id)globalPropsForInitialize;
- (void)loadTemplateURLWithRawData:extraInfo:;
- (void)updateWithRawData:extraParams:;
- (void)setHasUpdateData:;
- (void)registerBridges;
- (void)updateHorizontalCardIfNeed;
- (BOOL)hasUpdateData;
- (BOOL)useNewLifeCycleMethod;
- (void)sendEvent:withParams:;
- (void)updateData:extraParams:;
- (void)trackLoadResultWithURL:error:;
- (void)trackFELoadResult:isSuccess:;
- (void)containerLoadFinish;
- (double)loadStartTime;
- (void)setLoadStartTime:;
- (void)setUseNewLifeCycleMethod:;
- (void)viewWillReset;
- (id)horizontalView;
- (void)setHorizontalView:;
- (void)setModel:;
- (id)card;
- (void)dealloc;
- (void)setCard:;
- (id)model;
- (void).cxx_destruct;
- (id)templateURL;
@end
