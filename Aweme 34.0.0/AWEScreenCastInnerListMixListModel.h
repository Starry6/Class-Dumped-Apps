@interface AWEScreenCastInnerListMixListModel : AWEBaseApiModel
@property (nonatomic) NSArray list;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSDictionary logPB;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (id)logPB;
- (void)setLogPB:;
- (void)setList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (id)list;
- (void).cxx_destruct;
+ (id)listJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
