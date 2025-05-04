@interface AWEGuestFollowListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray authorList;
@property (nonatomic) q totalCount;
@property (nonatomic) NSString nextPageToken;
@property (nonatomic) BOOL hasMore;
- (id)authorList;
- (void)setAuthorList:;
- (id)nextPageToken;
- (void)setNextPageToken:;
- (id)initWithDictionary:error:;
- (long long)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)authorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
