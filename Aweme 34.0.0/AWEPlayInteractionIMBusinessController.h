@interface AWEPlayInteractionIMBusinessController : AWEPlayInteractionNewBaseController
@property (nonatomic) BOOL isReportedPlayBackTime;
- (void)reportViewStateWithViewState:;
- (void)p_reportGoodShowViewState;
- (BOOL)isReportedPlayBackTime;
- (void)setIsReportedPlayBackTime:;
- (void)p_trackFeedShareUnread;
- (void)viewDidLoad;
- (void)reset;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
