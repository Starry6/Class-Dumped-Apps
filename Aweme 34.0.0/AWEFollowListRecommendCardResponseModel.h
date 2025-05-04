@interface AWEFollowListRecommendCardResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray userList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSNumber hasMore;
@property (nonatomic) NSNumber total;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)userList;
- (void)setUserList:;
- (id)cursor;
- (void)setHasMore:;
- (id)extra;
- (id)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)total;
- (void)setTotal:;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
