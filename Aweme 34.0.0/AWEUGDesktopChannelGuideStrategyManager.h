@interface AWEUGDesktopChannelGuideStrategyManager : HTSService
@property (nonatomic) NSDictionary typeBusinessMap;
@property (nonatomic) NSMutableDictionary businessStrategiesList;
@property (nonatomic) NSLock lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)injectSceneDesktopChannelGuideStrategy:;
- (void)canShowDesktopChannelGuideWithModel:completion:;
- (void)preloadDesktopChannelGuideDataIfCanShowInXHourWithModel:completion:;
- (void)requestGuideConfigWithModel:completion:;
- (void)canShowDesktopChannelGuideWithRequestModel:completion:;
- (void)injectEvadeStrategy:;
- (void)showDesktopChannelGuideViewWithModel:needFrequencyControl:;
- (void)injectGuideInfoInstance:;
- (id)typeBusinessMap;
- (id)businessStrategiesList;
- (void)setTypeBusinessMap:;
- (void)setBusinessStrategiesList:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
@end
