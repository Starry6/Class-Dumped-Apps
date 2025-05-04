@interface AWEFeedDraggingCleanController : AWEBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)draggingCleanScreen:feedCell:forceNoAnimation:;
- (double)cleanAnimationDuration;
- (double)recoveryAnimationDuration;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDecelerating:;
- (void)scrollViewDidEndDragging:willDecelerate:;
+ (id)cleanScreenConfig;
+ (BOOL)enableDraggingCleanScreen;
@end
