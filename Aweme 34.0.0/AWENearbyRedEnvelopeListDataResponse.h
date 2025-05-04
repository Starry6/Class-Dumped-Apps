@interface AWENearbyRedEnvelopeListDataResponse : AWEBaseApiModel
@property (nonatomic) q hasMore;
@property (nonatomic) NSArray feedList;
@property (nonatomic) q nextOffset;
- (void)setNextOffset:;
- (id)feedList;
- (void)setFeedList:;
- (void)setHasMore:;
- (long long)hasMore;
- (void).cxx_destruct;
- (long long)nextOffset;
+ (id)feedListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
