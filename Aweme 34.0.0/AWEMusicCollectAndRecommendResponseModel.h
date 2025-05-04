@interface AWEMusicCollectAndRecommendResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSNumber totalCount;
@property (nonatomic) NSArray mediaList;
@property (nonatomic) NSArray recommendList;
@property (nonatomic) AWECollectDiversionModel collectDiversionModel;
- (id)mediaList;
- (void)setMediaList:;
- (id)collectDiversionModel;
- (id)recommendList;
- (void)setRecommendList:;
- (id)cursor;
- (id)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)hasMoreJSONTransformer;
+ (id)mediaListJSONTransformer;
+ (id)collectDiversionModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)recommendListJSONTransformer;
@end
