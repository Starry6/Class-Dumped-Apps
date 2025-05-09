@interface AWESearchChallengeManager : AWESearchBaseManager
@property (nonatomic) <AWEHttpTask> recommendTask;
@property (nonatomic) <AWEHttpTask> searchTask;
@property (nonatomic) NSString dateString;
@property (nonatomic) BOOL searchForHashtag;
@property (nonatomic) NSMutableArray challengeArray;
@property (nonatomic) NSMutableArray recommendArray;
@property (nonatomic) NSDictionary searchExtraParams;
@property (nonatomic) AWESearchGlobalDoodleConfigModel extraModel;
@property (nonatomic) @? beforeBuildRequestBlock;
- (id)extraModel;
- (void)setExtraModel:;
- (id)searchExtraParams;
- (void)setSearchExtraParams:;
- (id)currentTimeStr;
- (id)searchTask;
- (void)setSearchTask:;
- (void)p_handleRefreshServerTimeCost:;
- (id)beforeBuildRequestBlock;
- (void)setBeforeBuildRequestBlock:;
- (void)setRecommendArray:;
- (id)recommendArray;
- (id)challengeArray;
- (id)recommendTask;
- (void)setRecommendTask:;
- (BOOL)searchForHashtag;
- (void)setChallengeArray:;
- (void)fetchChallengsWithKeyword:cursor:isPullToRefresh:completion:;
- (void)fetchRecommendChallengsWithCursor:completion:;
- (void)searchChallengeWithKeyword:isPullToRefresh:completion:;
- (void)loadMoreChallenge:;
- (void)fetchPugnaRecommendChallenge:;
- (void)searchRecommendChallenge:;
- (void)loadMoreRecommendChallenge:;
- (void)setSearchForHashtag:;
- (id)init;
- (void).cxx_destruct;
- (id)dateString;
- (void)setDateString:;
@end
