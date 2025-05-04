@interface AWEGeneralFilmTelevisionSearchModel : AWEBaseApiModel
@property (nonatomic) AWEGeneralFilmTelevisionCardModel cardModel;
@property (nonatomic) AWEGeneralFilmTelevisionTopicModel topicModel;
@property (nonatomic) AWEGeneralFilmTelevisionModuleModel moduleModel;
@property (nonatomic) AWEGeneralFilmTelevisionSeriesModel seriesModel;
@property (nonatomic) q type;
- (id)cardModel;
- (void)setCardModel:;
- (id)topicModel;
- (void)setTopicModel:;
- (id)moduleModel;
- (void)setModuleModel:;
- (id)seriesModel;
- (void)setSeriesModel:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)cardModelJSONTransformer;
+ (id)topicModelJSONTransformer;
+ (id)moduleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
