@interface AWESearchImageTextVerticalViewController : AWESearchResultVerticalBaseViewController
@property (nonatomic) NSArray previewdAwemeList;
@property (nonatomic) NSArray viewModels;
- (id)tabConfig;
- (id)containerConfig;
- (void)setContainerConfig:;
- (void)fetchDataWithKeyWord:enterFrom:extraLogParams:isSearchByUserClick:animated:completion:;
- (void)customHandleNodeViewModelsReady:withResponseParams:isLoadmore:;
- (BOOL)enableStableLog;
- (void)customFeedDidEndDragging:willDecelerate:;
- (void)endReloadData;
- (void)customAnylyseResponseDataModelsReadyBlock:withParams:isLoadMore:;
- (id)previewdAwemeList;
- (BOOL)isPreviewdAwemeListMatchedWithCurrentAwemeList:;
- (void)showPreviewedToastWithOffset:;
- (void)setPreviewdAwemeList:;
- (void)handleFilterSelectedData:;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)setViewModels:;
- (id)viewModels;
@end
