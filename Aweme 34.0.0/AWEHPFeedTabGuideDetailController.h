@interface AWEHPFeedTabGuideDetailController : AWEAwemeNewDetailBaseController
@property (nonatomic) AWEHPFeedTabGuidePreHandleController preHandleController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)refreshCompletion:error:needAnimation:;
- (void)initialFetchCompletion:error:;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
- (long long)hpCurrentIndex;
- (id)preHandleController;
- (id)hpEnterFrom;
- (id)hpAwemeAtIndex:;
- (id)hpCurrentAwemeList;
- (void)setPreHandleController:;
- (void).cxx_destruct;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
@end
