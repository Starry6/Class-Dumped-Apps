@interface AWEFeedDetailPublicWelfareTaskController : AWEAwemeNewDetailBaseController
@property (nonatomic) BOOL hasGetModel;
- (BOOL)hasGetModel;
- (void)setHasGetModel:;
- (id)init;
- (void)dealloc;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
@end
