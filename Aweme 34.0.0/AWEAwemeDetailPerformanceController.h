@interface AWEAwemeDetailPerformanceController : AWEAwemeNewDetailBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tableView:didEndDisplayingCellBeforeReset:forRowAtIndexPath:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (id)currentModel;
- (void)viewWillDisappear;
- (id)videoController;
@end
