@interface AWEMusicChartDetailModel : AWEBaseApiModel
@property (nonatomic) AWEMusicChartMusicModel music;
@property (nonatomic) NSArray awemeList;
- (id)awemeList;
- (void)setAwemeList:;
- (id)music;
- (void)setMusic:;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)musicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
