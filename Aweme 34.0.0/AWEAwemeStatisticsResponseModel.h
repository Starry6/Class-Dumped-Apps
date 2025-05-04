@interface AWEAwemeStatisticsResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray statisticsList;
- (id)statisticsList;
- (void)setStatisticsList:;
- (void).cxx_destruct;
+ (id)statisticsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
