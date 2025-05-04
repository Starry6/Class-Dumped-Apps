@interface AWESearchVerticalContainerService : AWESearchBaseContainerService
@property (nonatomic) <AWESearchResultVerticalBaseViewControllerProtocol> container;
@property (nonatomic) <AWESearchServiceManagerProtocol> serviceManager;
@property (nonatomic) NSString serviceID;
@property (nonatomic) NSString serviceName;
@property (nonatomic) q priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)customFeedRecieveRequestWithResponseParams:isLoadMore:;
- (void)fetchDataWithKeyWord:enterFrom:extraLogParams:isSearchByUserClick:isFilterSearch:animated:completion:;
- (void)customRefreshResponseCompletion:withParams:;
- (void)customHandleNodeViewModelsReady:withResponseParams:isLoadmore:;
- (void)customComponentDidFinishRender:withViewModel:;
- (void)handleRefreshResponseCompletion:withParams:;
@end
