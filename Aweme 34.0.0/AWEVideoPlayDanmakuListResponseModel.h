@interface AWEVideoPlayDanmakuListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray danmakuList;
@property (nonatomic) q offset;
@property (nonatomic) q count;
@property (nonatomic) q hasMore;
- (id)danmakuList;
- (void)setDanmakuList:;
- (void)setCount:;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (long long)count;
- (long long)hasMore;
- (void).cxx_destruct;
+ (id)danmakuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
