@interface AWEAwemeDetailLongPressPanelClearModeController : AWEAwemeNewDetailBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)enterPureMode:;
- (void)postExitClearScreenNotificationIfNeeded:;
- (BOOL)enableGeneralCellSupport;
- (void)dealloc;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)viewDidLoad;
- (void)scrollViewWillBeginDragging:;
- (void)viewWillDisappear;
- (void)appDidEnterBackground;
@end
