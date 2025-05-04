@interface AWETVAwemeResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray streamList;
@property (nonatomic) NSString debugInfo;
- (id)streamList;
- (void)setStreamList:;
- (id)debugInfo;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setDebugInfo:;
+ (id)streamListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
