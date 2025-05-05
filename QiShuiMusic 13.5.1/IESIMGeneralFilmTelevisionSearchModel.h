@interface IESIMGeneralFilmTelevisionSearchModel : IESIMBaseApiModel
@property (nonatomic) IESIMGeneralFilmTelevisionCardModel cardModel;
@property (nonatomic) IESIMGeneralFilmTelevisionTopicModel topicModel;
@property (nonatomic) IESIMGeneralFilmTelevisionModuleModel moduleModel;
@property (nonatomic) IESIMGeneralFilmTelevisionSeriesModel seriesModel;
@property (nonatomic) q type;
- (void)setSeriesModel:;
- (void)setModuleModel:;
- (id)cardModel;
- (id)moduleModel;
- (id)seriesModel;
- (void)setCardModel:;
- (void)setTopicModel:;
- (id)topicModel;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
+ (id)cardModelJSONTransformer;
+ (id)moduleModelJSONTransformer;
+ (id)topicModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
