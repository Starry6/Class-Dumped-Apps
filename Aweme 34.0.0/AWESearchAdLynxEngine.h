@interface AWESearchAdLynxEngine : AWESearchDynamicEngine
@property (nonatomic) AWEAdGeneralSearchLynxComponentMonitorContext adLynxMonitorContext;
@property (nonatomic) q loadStartFirstScreenTimeStamp;
@property (nonatomic) double loadStartTimeStamp;
@property (nonatomic) BOOL showEventTrigger;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didFinishLoadWithURL:;
- (void)container:didLoadFailedWithUrl:error:;
- (void)containerWillStartLoading:;
- (void)containerDidStartLoading:;
- (void)containerDidFirstScreen:;
- (void)setLoadStartTimeStamp:;
- (double)loadStartTimeStamp;
- (void)setLoadStartFirstScreenTimeStamp:;
- (long long)loadStartFirstScreenTimeStamp;
- (void)didEndShowing:;
- (void)setAdInfoWithLynxView:;
- (id)initWithModel:preferWidth:useBullet:shouldReuseLynxView:reuseMethod:;
- (void)updateAdLynxMonitorContext;
- (id)createAdLynxMonitorContext;
- (void)setAdLynxMonitorContext:;
- (id)adLynxMonitorContext;
- (id)currentAdAwemeModel;
- (void)updateOriginAdInfoShowedBefore:;
- (void)setShowEventTrigger:;
- (void)getAdDataFromCommerceCardModel:rawAdData:adData:;
- (BOOL)showEventTrigger;
- (void)commerceLynxShowMonitor;
- (void)handleTransToTop:;
- (void)handleAdSearchOpenLongPressFeedbackPanel:;
- (void)sendShowEvent:;
- (void)postAdPreloadResult;
- (void)prepareForReuse;
- (void)_addObservers;
- (void).cxx_destruct;
- (void)updateWithModel:;
@end
