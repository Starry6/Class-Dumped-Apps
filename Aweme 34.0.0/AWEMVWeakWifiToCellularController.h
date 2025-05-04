@interface AWEMVWeakWifiToCellularController : AWEDCFeedBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)detailTableViewControllerDidDisappear:currentAwemeModel:;
- (void)detailTableViewControllerDidAppear:currentAwemeModel:;
- (void)containerViewDidAppear:;
- (void)containerViewDidDisappear:;
- (void)onLoadMoreListDataStartWithReason:;
- (void)onLoadMoreListDataEndWithReason:response:error:;
- (BOOL)supportShowSwitchNetPushViewScene;
- (void)loadMoreBegin;
- (void)loadMoreCompletion;
@end
