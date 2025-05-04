@interface AWELandscapeFeedTimingCloseController : AWELandscapeFeedBaseController
@property (nonatomic) q totalCountdownTime;
@property (nonatomic) BOOL isTimingCloseRunning;
@property (nonatomic) BDXBridgeEventSubscriber timingCloseSubscriber;
- (void)didEnterLandscape;
- (long long)totalCountdownTime;
- (void)setTotalCountdownTime:;
- (void)willExitLandscape;
- (void)setupTimingCloseSubscriber;
- (void)setupOldTimingCloseSubscriber;
- (id)timingCloseSubscriber;
- (void)trackLandscapeModePlayTimeWithExtraParams:;
- (void)setTimingCloseSubscriber:;
- (BOOL)isTimingCloseRunning;
- (void)setIsTimingCloseRunning:;
- (void).cxx_destruct;
@end
