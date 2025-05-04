@interface AWEMusicPerformanceListResponse : AWEBaseApiModel
@property (nonatomic) NSArray performanceList;
@property (nonatomic) NSString cursor;
@property (nonatomic) BOOL hasMore;
- (id)performanceList;
- (void)setPerformanceList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)performanceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
