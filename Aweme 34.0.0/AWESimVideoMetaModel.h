@interface AWESimVideoMetaModel : BDSimPlayerMediaMetaModel
@property (nonatomic) AWEAwemeModel model;
- (id)videoMeta;
- (id)strategyTokens;
- (id)brightnessMean;
- (void)buildMetaWithModel:;
- (id)brightRatioMean;
- (id)diffOverexposureRatio;
- (id)stdBrightness;
- (id)overexposureRatioMean;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
@end
