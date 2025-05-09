@interface IESLiveSaaSVSFeedChainDataSource : NSObject
@property (nonatomic) <IESLiveSaaSVSFeedChainDataSourceDelegate> delegate;
@property (nonatomic) IESLiveSaaSFeedDataApi feedApi;
@property (nonatomic) IESLiveSaaSFeedDrawerViewControllerContext context;
@property (nonatomic) NSMutableArray cellModels;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feedApi;
- (id)cellModels;
- (id)emptyViewForListAdapter:;
- (void)fetchFeedList:method:result:;
- (id)generateFeedURLForEnterFrom:enterMethod:tabId:actionType:;
- (double)getCalculateItemTitleHeightWithCurrentIndex:itemWidth:;
- (id)listAdapter:sectionControllerForObject:;
- (void)loadMore;
- (void)monitorFeedType:withError:startTime:;
- (id)objectsForListAdapter:;
- (id)parseCellModelsFromResponse:;
- (id)parseFeedItem:;
- (void)setCellModels:;
- (void)setFeedApi:;
- (void)refresh;
- (BOOL)isEmpty;
- (id)context;
- (void)setDelegate:;
- (void)setHasMore:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (void)setContext:;
- (BOOL)isRefreshing;
- (id)initWithDelegate:context:;
- (void)setIsRefreshing:;
@end
