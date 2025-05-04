@interface AWESearchVerticalServiceManager : AWESearchBasicViewControllerServiceManager
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithServiceNameArray:;
- (void)customFeedRecieveRequestWithResponseParams:isLoadMore:;
- (void)fetchDataWithKeyWord:enterFrom:extraLogParams:isSearchByUserClick:isFilterSearch:animated:completion:;
- (void)customRefreshResponseCompletion:withParams:;
- (void)customHandleNodeViewModelsReady:withResponseParams:isLoadmore:;
- (void)customComponentDidFinishRender:withViewModel:;
- (void)handleRefreshResponseCompletion:withParams:;
- (id)customContainer;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
@end
