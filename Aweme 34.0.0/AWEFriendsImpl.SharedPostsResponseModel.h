@interface AWEFriendsImpl.SharedPostsResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
- (id)awemeList;
- (void)setAwemeList:;
- (id)cursor;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
