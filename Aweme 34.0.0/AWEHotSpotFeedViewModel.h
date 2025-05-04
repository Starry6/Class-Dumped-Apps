@interface AWEHotSpotFeedViewModel : NSObject
@property (nonatomic) AWEHotSpotFeedInitialContext initialContext;
@property (nonatomic) AWEHotSpotFeedStateModel stateModel;
@property (nonatomic) AWEHotPointDataControllerCache dataControllerCache;
@property (nonatomic) AWEHotSpotFeedNewDetailCache detailCache;
@property (nonatomic) AWEHotSpotBottomPostConfig postConfig;
@property (nonatomic) AWENewHotSearchModel currentHotSearchModel;
@property (nonatomic) AWEHotPointFeedDataController dataController;
- (void)setDataController:;
- (id)initialContext;
- (id)stateModel;
- (id)currentHotSearchModel;
- (BOOL)isNearbyStyle;
- (id)dataControllerCache;
- (id)getHandledOriginalDataArray:hotSpotModel:loadmoreHasMore:needUpdateCount:;
- (void)configWithParamDict:;
- (void)setCurrentHotSearchModel:;
- (BOOL)alreadyAddPreloadVideoCount;
- (void)setDataControllerCache:;
- (BOOL)shouldForceOneVideo;
- (id)postConfig;
- (void)setPostConfig:;
- (id)detailCache;
- (void)setInitialContext:;
- (void)setStateModel:;
- (void)setDetailCache:;
- (void).cxx_destruct;
- (id)dataController;
@end
