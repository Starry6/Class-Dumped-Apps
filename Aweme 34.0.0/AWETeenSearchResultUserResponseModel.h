@interface AWETeenSearchResultUserResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray userList;
@property (nonatomic) Q count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber cursor;
- (id)userList;
- (void)setUserList:;
- (id)cursor;
- (void)setCount:;
- (void)setHasMore:;
- (unsigned long long)count;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
