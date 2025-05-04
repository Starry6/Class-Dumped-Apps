@interface AWETeenSubscribeListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray subscribeList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q cursor;
- (id)subscribeList;
- (void)setSubscribeList:;
- (unsigned long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)hasMoreJSONTransformer;
+ (id)subscribeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
