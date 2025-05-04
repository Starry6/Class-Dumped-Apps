@interface AWEMiniLunaGetUserMixedCollectionsResponse : AWEBaseApiModel
@property (nonatomic) NSString nextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray mixedInfos;
@property (nonatomic) q totalNum;
- (id)nextCursor;
- (void)setNextCursor:;
- (long long)totalNum;
- (void)setTotalNum:;
- (id)mixedInfos;
- (void)setMixedInfos:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)mixedInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
