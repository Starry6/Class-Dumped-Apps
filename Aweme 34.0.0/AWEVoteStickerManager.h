@interface AWEVoteStickerManager : NSObject
@property (nonatomic) q offset;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) <AWEHttpTask> currentTask;
@property (nonatomic) NSMutableArray voteUserList;
@property (nonatomic) BOOL hasMore;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)clearVoteUserList;
- (void)refreshVoteUserListWithVoteID:optionID:completion:;
- (void)loadMoreVoteUserListWithVoteID:optionID:completion:;
- (id)voteUserList;
- (void)setVoteUserList:;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (id)currentTask;
- (void)setCurrentTask:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (void)selectOption:ofVote:completion:;
@end
