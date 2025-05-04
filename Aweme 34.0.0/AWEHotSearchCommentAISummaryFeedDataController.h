@interface AWEHotSearchCommentAISummaryFeedDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSString hotspotID;
@property (nonatomic) NSNumber eventDiscussID;
@property (nonatomic) NSString previousPage;
@property (nonatomic) BOOL isFromDiscussionTab;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)setHotspotID:;
- (id)eventDiscussID;
- (void)setEventDiscussID:;
- (void)setIsFromDiscussionTab:;
- (void)p_loadDataWithPullType:completion:;
- (id)p_requestURLString;
- (id)p_requestParams;
- (BOOL)isFromDiscussionTab;
- (id)hotspotID;
- (id)cursor;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)previousPage;
- (void)setPreviousPage:;
- (void)updateWithContext:;
@end
