@interface AWEShopSeekResponse : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSNumber nextCursor;
@property (nonatomic) NSNumber hasMore;
@property (nonatomic) NSNumber itemTotalCount;
- (id)nextCursor;
- (void)setNextCursor:;
- (id)awemeList;
- (void)setAwemeList:;
- (id)itemTotalCount;
- (void)setItemTotalCount:;
- (void)setHasMore:;
- (id)hasMore;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
