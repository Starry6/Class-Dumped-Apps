@interface AWEFeedLongPressPanelClearModeController : AWEBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willRefresh;
- (void)enterPureMode:;
- (void)postExitClearScreenNotificationIfNeeded:;
- (void)dealloc;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)viewDidLoad;
- (void)scrollViewWillBeginDragging:;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
- (void)viewWillDisappear;
- (void)appDidEnterBackground;
@end
