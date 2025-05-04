@interface AWEIMSecondaryCommentDataController : AWEListDataController
@property (nonatomic) NSString noticeID;
@property (nonatomic) q cursor;
@property (nonatomic) BOOL isCommentMultiItemPolymeric;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q total;
@property (nonatomic) BOOL isCommentAIClonePolymeric;
- (void)loadMoreWithCompletion:;
- (void)setNoticeID:;
- (void)setIsCommentMultiItemPolymeric:;
- (BOOL)isCommentMultiItemPolymeric;
- (void)setIsCommentAIClonePolymeric:;
- (id)noticeID;
- (BOOL)isCommentAIClonePolymeric;
- (id)getParams;
- (id)initWithNoticeID:isCommentMultiItemPolymeric:;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (long long)total;
- (void)setTotal:;
@end
