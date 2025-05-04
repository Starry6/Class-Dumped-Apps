@interface AWEAwemeDetailPaidAuthController : AWEAwemeNewDetailBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initialFetchCompletion:error:;
- (BOOL)isPlayletScene;
- (void)dealloc;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
@end
