@interface AWEGuestFollowFeedResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSString nextPageToken;
@property (nonatomic) BOOL hasMore;
- (id)awemeList;
- (void)setAwemeList:;
- (id)nextPageToken;
- (void)setNextPageToken:;
- (id)initWithDictionary:error:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
