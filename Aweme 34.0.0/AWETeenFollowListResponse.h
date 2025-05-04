@interface AWETeenFollowListResponse : AWEBaseApiModel
@property (nonatomic) NSArray subscribeList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber cursor;
- (id)subscribeList;
- (void)setSubscribeList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)hasMoreJSONTransformer;
+ (id)subscribeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
