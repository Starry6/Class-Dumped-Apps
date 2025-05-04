@interface AWEMusicFeedResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSArray mediaList;
@property (nonatomic) NSNumber totalCount;
- (id)mediaList;
- (void)setMediaList:;
- (id)cursor;
- (id)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)hasMoreJSONTransformer;
+ (id)mediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
