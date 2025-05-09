@interface AWEHotSearchCommentFeedDataController : AWEListDataController
@property (nonatomic) AWEHotSearchCommentFeedParamsModel paramsModel;
@property (nonatomic) NSNumber eventDiscussID;
@property (nonatomic) NSString userVoteInfo;
@property (nonatomic) NSString currentUserID;
@property (nonatomic) BOOL enentIDInserted;
@property (nonatomic) BOOL voteIsEmphasis;
@property (nonatomic) @? contextUpdateBlock;
@property (nonatomic) @? updateUserVoteBlock;
@property (nonatomic) BOOL isPreLoad;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)isEqualBlock;
- (id)requestURLString;
- (id)paramsModel;
- (void)setParamsModel:;
- (id)eventDiscussID;
- (void)setEventDiscussID:;
- (void)setVoteIsEmphasis:;
- (void)setUserVoteInfo:;
- (void)setCurrentUserID:;
- (BOOL)voteIsEmphasis;
- (void)reloadListWithPullType:completion:;
- (void)loadDataWithPullType:completion:;
- (id)paramsWithPullType:;
- (id)filterDuplicatedDatasourceWithArray:requestId:;
- (void)configVoteInfoWithCardList:userVoteTags:;
- (id)contextUpdateBlock;
- (id)updateUserVoteBlock;
- (BOOL)isPreLoad;
- (BOOL)enentIDInserted;
- (void)setEnentIDInserted:;
- (id)userVoteInfo;
- (id)itemIDForCardModel:;
- (void)updateWithContext:tabType:;
- (void)setContextUpdateBlock:;
- (void)setUpdateUserVoteBlock:;
- (void)setIsPreLoad:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)currentUserID;
@end
