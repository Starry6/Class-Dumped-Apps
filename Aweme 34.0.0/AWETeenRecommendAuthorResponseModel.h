@interface AWETeenRecommendAuthorResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray authorList;
@property (nonatomic) BOOL hasMore;
- (id)authorList;
- (void)setAuthorList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)hasMoreJSONTransformer;
+ (id)authorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
