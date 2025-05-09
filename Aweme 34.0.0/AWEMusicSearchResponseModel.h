@interface AWEMusicSearchResponseModel : ACCBaseApiModel
@property (nonatomic) NSArray musics;
@property (nonatomic) NSNumber hasMore;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSArray audios;
@property (nonatomic) <AWESearchCorrectModelProtocol> correctModel;
@property (nonatomic) AWEMusicSearchNilInfo nilInfo;
@property (nonatomic) AWEEMusicSearchGlobalDoodleConfigModel extraModel;
@property (nonatomic) NSDictionary streamTimeCost;
- (id)extraModel;
- (void)setExtraModel:;
- (id)correctModel;
- (void)setCorrectModel:;
- (id)streamTimeCost;
- (void)setStreamTimeCost:;
- (id)musics;
- (void)setMusics:;
- (id)nilInfo;
- (void)setNilInfo:;
- (id)cursor;
- (void)setHasMore:;
- (id)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)audios;
- (void)setAudios:;
+ (id)extraModelJSONTransformer;
+ (id)musicsJSONTransformer;
+ (id)nilInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)correctModelJSONTransformer;
@end
