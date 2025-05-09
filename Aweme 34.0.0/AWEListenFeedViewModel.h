@interface AWEListenFeedViewModel : AWEBaseListViewModel
@property (nonatomic) NSObject<AWEListenFeedDataControllerProtocol> dataController;
@property (nonatomic) AWEListDataController externalDataController;
@property (nonatomic) q initialIndex;
@property (nonatomic) q dataSourceType;
@property (nonatomic) <AWEListenFeedViewModelProtocol> delegate;
@property (nonatomic) NSNumber listenMode;
@property (nonatomic) AWEListenFeedContext context;
@property (nonatomic) BOOL isPreloadMore;
- (void)fetchListData;
- (void)loadMoreListData;
- (id)sectionViewModel;
- (void)setDataController:;
- (id)createViewModelsWithAwemeModels:;
- (id)awemeModelWithIndex:;
- (long long)indexOfAwemeModel:;
- (id)aAWEListenFeedAdapter;
- (void)setExternalDataController:;
- (id)externalDataController;
- (long long)cellModelsCount;
- (BOOL)useExternalDataController;
- (id)listenMode;
- (void)setListenMode:;
- (void)syncWithSourceViewModel:requestCount:forceReplace:;
- (void)setIsPreloadMore:;
- (id)cellViewModelWithIndex:;
- (long long)adjustInitialIndex:models:;
- (void)setupWithModel:playModel:externalDataController:dataController:initialIndex:;
- (long long)convertCurrentPlaylistFromCurrentIndex:;
- (void)preloadCellAfterIndex:;
- (id)extendModelArrayWithIndex:;
- (id)filterAwemeModelsWithAwemeType:;
- (void)trackRequestWithCursor:isPreload:duration:responseModel:fetchType:error:;
- (BOOL)isPreloadMore;
- (void)preloadCellMixInfoAtIndexIfNeeded:;
- (id)filterAwemeModels:;
- (void)setupSectionViewModelIfNeeded;
- (void)setupWithModel:playModel:;
- (id)delegate;
- (long long)dataSourceType;
- (void)setDataSourceType:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)handleResponse:error:;
- (void)setDelegate:;
- (id)context;
- (id)dataController;
- (long long)initialIndex;
- (void)setInitialIndex:;
+ (Class)aAWEListenFeedAdapterClass;
@end
