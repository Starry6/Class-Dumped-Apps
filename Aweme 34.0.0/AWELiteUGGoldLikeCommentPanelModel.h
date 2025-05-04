@interface AWELiteUGGoldLikeCommentPanelModel : AWELiteBaseApiModel
@property (nonatomic) q totalCount;
@property (nonatomic) NSString cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString itemRecordToken;
@property (nonatomic) NSArray userList;
- (id)userList;
- (void)setUserList:;
- (id)itemRecordToken;
- (void)setItemRecordToken:;
- (id)cursor;
- (long long)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
