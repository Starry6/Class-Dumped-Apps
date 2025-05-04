@interface AWEIMHighlyProspectiveRecommendResponse : AWEBaseApiModel
@property (nonatomic) AWEIMHighlyProspectiveBaseResponse baseResp;
@property (nonatomic) NSArray userList;
@property (nonatomic) q nextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q totalCount;
- (long long)nextCursor;
- (void)setNextCursor:;
- (id)userList;
- (void)setUserList:;
- (id)baseResp;
- (void)setBaseResp:;
- (long long)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)userListJSONTransformer;
+ (id)baseRespJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
