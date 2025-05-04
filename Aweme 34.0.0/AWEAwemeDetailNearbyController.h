@interface AWEAwemeDetailNearbyController : AWEAwemeNewDetailBaseController
@property (nonatomic) BOOL hasAlreadyShowPOIAnchor;
- (void)cellViewControllerDidRenderFirstFrame:;
- (void)loadMoreCompletionWithData:;
- (void)showAnchor;
- (BOOL)hasAlreadyShowPOIAnchor;
- (void)setHasAlreadyShowPOIAnchor:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
@end
