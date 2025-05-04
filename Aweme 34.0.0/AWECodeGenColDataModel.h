@interface AWECodeGenColDataModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenEffectReturnModel effectModel;
@property (nonatomic) AWECodeGenMusicReturnModel musicModel;
@property (nonatomic) AWECodeGenTrendsReturnModel trendsModel;
@property (nonatomic) AWECodeGenTempleteReturnModel templeteModel;
@property (nonatomic) AWECodeGenUlikeTempleteReturnModel uliketempleteModel;
@property (nonatomic) AWECodeGenBackReturnModel backModel;
- (id)musicModel;
- (void)setMusicModel:;
- (id)effectModel;
- (void)setEffectModel:;
- (id)trendsModel;
- (id)templeteModel;
- (id)uliketempleteModel;
- (void)setTrendsModel:;
- (void)setTempleteModel:;
- (void)setUliketempleteModel:;
- (id)backModel;
- (void)setBackModel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
