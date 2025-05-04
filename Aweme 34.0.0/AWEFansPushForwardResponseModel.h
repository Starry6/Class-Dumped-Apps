@interface AWEFansPushForwardResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray urgeList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) q total;
@property (nonatomic) BOOL hasMore;
- (id)urgeList;
- (void)setUrgeList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
+ (id)urgeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
