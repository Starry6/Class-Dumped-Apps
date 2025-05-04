@interface AWEAIVideoClipMusicListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray musicList;
@property (nonatomic) ACCVideoMusicCategoryModel categoryInfo;
@property (nonatomic) BOOL hasMore;
- (id)musicList;
- (void)setMusicList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)categoryInfo;
- (void)setCategoryInfo:;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
