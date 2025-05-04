@interface AWEStoryKit.PerformanceMonitorController : AWEStoryKit.StoryKitBaseController
- (id)init;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDecelerating:;
- (void)scrollViewDidEndDragging:willDecelerate:;
@end
