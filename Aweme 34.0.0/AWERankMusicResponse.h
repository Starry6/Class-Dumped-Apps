@interface AWERankMusicResponse : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray musicList;
@property (nonatomic) AWESearchNilInfoModel searchNilInfoModel;
@property (nonatomic) AWESearchNilTextModel searchNilTextModel;
- (id)searchNilInfoModel;
- (void)setSearchNilInfoModel:;
- (id)searchNilTextModel;
- (void)setSearchNilTextModel:;
- (id)musicList;
- (void)setMusicList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)hasMoreJSONTransformer;
+ (id)searchNilInfoModelTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
