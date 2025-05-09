@interface AWETemplateRelatedVideoBarViewModel : AWETemplateBaseViewModel
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEAwemeModel relatedModel;
@property (nonatomic) AWEAwemeResponseModel recommendModel;
@property (nonatomic) BOOL isRequestRelatedModel;
@property (nonatomic) q videoPreloadTime;
@property (nonatomic) BOOL hasJumpToDetail;
- (void)viewController_viewDidAppear;
- (void)setRecommendModel:;
- (id)recommendModel;
- (void)viewDidTriggerAction:;
- (void)setRelatedModel:;
- (id)relatedModel;
- (long long)videoPreloadTimetamp;
- (void)setVideoPreloadTime:;
- (long long)videoPreloadTime;
- (void)tryPreLoadRelatedVideo;
- (void)setIsRequestRelatedModel:;
- (void)setHasJumpToDetail:;
- (BOOL)hasJumpToDetail;
- (BOOL)isRequestRelatedModel;
- (void)tryPreloadVideo;
- (void)tryPreloadRelatedVideos;
- (void)trackListRefreshWithBeginTime:responseModel:error:;
- (void)trackRelatedListPreload;
- (void)jumpToRelatedDetail;
- (void)viewController_viewWillDisplay;
- (void)didInitialized;
- (BOOL)canCustomTrackForTemplateViewShow;
- (BOOL)canCustomTrackForTemplateViewClick;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)shouldActiveWithData:scene:context:;
+ (BOOL)shouldActiveWithData:context:scene:extraInfo:;
@end
