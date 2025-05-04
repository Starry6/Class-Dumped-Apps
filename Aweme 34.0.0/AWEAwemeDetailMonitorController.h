@interface AWEAwemeDetailMonitorController : AWEAwemeNewDetailBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)beginLoadMore;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
@end
