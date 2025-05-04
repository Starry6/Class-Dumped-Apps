@interface AWEFeedHotSpotController : AWEBaseController
- (BOOL)enableHotspotWidgetGuide;
- (void)videoStartPlay:;
- (void)p_setIsPlayStartedInXTabHotspot:;
- (void)p_tryWidgetGuide;
- (BOOL)p_shouldAvoidOtherLogic;
- (id)init;
- (void)dealloc;
@end
