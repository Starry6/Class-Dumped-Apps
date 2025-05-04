@interface AWEIMPolymerizationDiggDataController : AWEListDataController
@property (nonatomic) NSNumber noticeID;
@property (nonatomic) q noticeType;
@property (nonatomic) q diggType;
@property (nonatomic) q maxCursor;
@property (nonatomic) q minCursor;
@property (nonatomic) q total;
@property (nonatomic) BOOL hasMore;
- (void)loadMoreWithCompletion:;
- (long long)minCursor;
- (long long)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)setNoticeType:;
- (void)setNoticeID:;
- (long long)diggType;
- (id)noticeID;
- (id)getParams;
- (void)setDiggType:;
- (id)initWithNoticeID:noticeType:diggType:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (long long)total;
- (long long)noticeType;
- (void)setTotal:;
@end
