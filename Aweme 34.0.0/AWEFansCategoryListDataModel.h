@interface AWEFansCategoryListDataModel : AWEBaseApiModel
@property (nonatomic) NSMutableArray followers;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q offset;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (id)followers;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setFollowers:;
+ (id)followersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
