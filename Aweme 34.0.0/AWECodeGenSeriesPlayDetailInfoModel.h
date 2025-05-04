@interface AWECodeGenSeriesPlayDetailInfoModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenSeriesOutflowContinuePlayInfoModel outflowContinuePlayInfoModel;
@property (nonatomic) AWECodeGenSeriesItemTitlePrefixModel itemTitlePrefixModel;
@property (nonatomic) NSInteger seriesAwemeIndex;
- (int)seriesAwemeIndex;
- (void)setSeriesAwemeIndex:;
- (id)outflowContinuePlayInfoModel;
- (void)setOutflowContinuePlayInfoModel:;
- (id)itemTitlePrefixModel;
- (void)setItemTitlePrefixModel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
