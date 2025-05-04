@interface AWEFansPushListDataController : AWEListDataController
@property (nonatomic) q nextUserType;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHistory;
@property (nonatomic) NSNumber total;
@property (nonatomic) NSNumber lastTimeStamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMoreWithCompletion:;
- (void)setHasHistory:;
- (id)getParams;
- (void)setLastTimeStamp:;
- (long long)nextUserType;
- (void)setNextUserType:;
- (id)lastTimeStamp;
- (id)init;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)total;
- (BOOL)hasHistory;
- (void)setTotal:;
@end
