@interface AWEMusicChartMusicModel : AWEBaseApiModel
@property (nonatomic) AWEMusicModel musicInfo;
@property (nonatomic) NSNumber heat;
@property (nonatomic) BOOL canBackgroundPlay;
@property (nonatomic) BOOL hasCopyRight;
@property (nonatomic) NSNumber rank;
@property (nonatomic) AWEMusicMetaStruct chartMusicMeta;
- (BOOL)canBackgroundPlay;
- (void)setCanBackgroundPlay:;
- (void)setHeat:;
- (id)musicInfo;
- (void)setMusicInfo:;
- (id)heat;
- (BOOL)hasCopyRight;
- (void)setHasCopyRight:;
- (id)chartMusicMeta;
- (void)setChartMusicMeta:;
- (id)rank;
- (void)setRank:;
- (void).cxx_destruct;
+ (id)chartMusicMetaJSONTransformer;
+ (id)musicInfoJSONTransformer;
+ (id)hasCopyRightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)canBackgroundPlayJSONTransformer;
@end
