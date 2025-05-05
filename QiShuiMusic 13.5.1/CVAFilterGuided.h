@interface CVAFilterGuided : ImageSaverRegistrator
@property (nonatomic) NSString label;
- (void)encodeReconstructToCommandBuffer:inGuidancePixelBuffer:inCoeffTexture:outFilteredTexture:;
- (id)label;
- (void)encodePostProcessAlphaToCommandBuffer:source:destination:alphaMaxLaplacian:infConvOrientation:infConvMajorRadius:infConvMinorRadius:gammaExponent:enableInfConvolution:;
- (void)encodeRegressionToCommandBuffer:inSourceTexture:inGuidanceTexture:inWeightTexture:outCoeffTexture:epsilon:;
- (void)encodeFilterApplyToBuffer:coeff:source:destination:;
- (void).cxx_destruct;
- (void)encodeHybridUpSamplingToCommandBuffer:source:destination:;
- (void)initSourceTexture:;
- (id)initWithDevice:library:pipelineLibrary:commandQueue:textureSize:alphaSize:kernelSize:infConvolutionDownsampling:laplacianLimitingDownsampling:laplacianLimitingBlurSize:error:;
@end
