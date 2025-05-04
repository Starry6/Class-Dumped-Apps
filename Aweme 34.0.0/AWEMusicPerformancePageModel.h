@interface AWEMusicPerformancePageModel : AWEBaseApiModel
@property (nonatomic) NSArray performanceList;
@property (nonatomic) BOOL hasMore;
- (id)performanceList;
- (void)setPerformanceList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)performanceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
