@interface AWEFeedUndertakeController : AWEBaseController
@property (nonatomic) q currentPlayingIndex;
- (long long)currentPlayingIndex;
- (void)setCurrentPlayingIndex:;
- (void)videoControllerWillStartNextLoop:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
@end
