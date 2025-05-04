@interface AWERelationFollowGroupUserListResponse : AWEBaseApiModel
@property (nonatomic) NSArray userList;
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q total;
- (id)userList;
- (void)setUserList:;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
