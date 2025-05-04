@interface AWEMVPortraitInnerCacheController : AWEDCFeedBaseController
@property (nonatomic) AWEMVChannelPageContext mvContext;
- (void)detailTableViewController:willDisplayCell:forRowAtIndexPath:model:;
- (void)detailTableViewControllerWillExit:currentAwemeModel:;
- (void)onLoadMoreListDataEndWithReason:response:error:;
- (id)mvContext;
@end
