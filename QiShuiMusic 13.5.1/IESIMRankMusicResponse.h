@interface IESIMRankMusicResponse : IESIMBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray musicList;
@property (nonatomic) IESIMSearchNilInfoModel searchNilInfoModel;
@property (nonatomic) IESIMSearchNilTextModel searchNilTextModel;
- (id)musicList;
- (id)searchNilInfoModel;
- (id)searchNilTextModel;
- (void)setMusicList:;
- (void)setSearchNilInfoModel:;
- (void)setSearchNilTextModel:;
- (id)cursor;
- (void)setHasMore:;
- (void)setCursor:;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)hasMoreJSONTransformer;
+ (id)musicListJSONTransformer;
+ (id)searchNilInfoModelTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
