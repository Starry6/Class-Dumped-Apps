@interface ADPCEDisparityColorPipelineParameters : ADPipelineParameters
@property (nonatomic) Q trainingWidth;
@property (nonatomic) float disparityScaleForModelZoom;
@property (nonatomic) float minDisparity;
@property (nonatomic) float maxDisparity;
@property (nonatomic) float pceBias;
@property (nonatomic) float outputDisparityBias;
- (id)init;
- (float)outputDisparityBias;
- (float)minDisparity;
- (void)setMinDisparity:;
- (float)maxDisparity;
- (void)setMaxDisparity:;
- (float)pceBias;
- (void)setPceBias:;
- (void)setOutputDisparityBias:;
- (unsigned long long)trainingWidth;
- (void)setTrainingWidth:;
- (float)disparityScaleForModelZoom;
- (void)setDisparityScaleForModelZoom:;
@end
