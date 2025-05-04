@interface AWERecommendLiveTrackController : AWEPlayInteractionNewBaseController
@property (nonatomic) BOOL isDisplaying;
- (void)setIsDisplaying:;
- (void)onPlayerPlay:ifPlay:;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)reset;
- (BOOL)isDisplaying;
- (void)viewWillDisappear;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
