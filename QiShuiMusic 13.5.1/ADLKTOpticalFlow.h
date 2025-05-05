@interface ADLKTOpticalFlow : NSObject
- (void)dealloc;
- (void)_setupPipelines;
- (void).cxx_destruct;
- (void)_zeroFlowWithCommandBuffer:uv_tex:;
- (int)_computeFeaturesWithCommandBuffer:in_tex:out_tex:;
- (int)_computeFeaturesDerivativesWithCommandBuffer:in_tex:out_tex:;
- (void)_doNLRegularizationWithCommandBuffer:in_uv_tex:join_tex:w_tex:out_uv_tex:;
- (long long)encodeOpticalFlowSolverToCommandBuffer:currentFeaturesArray:currentDerivitiveArray:previousFeaturesArray:previousDerivitiveArray:currentPyramidsArray:outShiftMap:;
- (long long)encodePyramidFeaturesToCommandBuffer:colorTexture:outPyramidsArray:outFeaturesArray:outDerivitiveArray:;
- (id)initWithDevice:inputSize:scales:;
- (int)_downscale2XWithCommandBuffer:in_tex:out_tex:scaling_factor:;
- (BOOL)_createImagePyramidWithCommandBuffer:inOutPyramidsArray:error:;
- (BOOL)_createImagePyramidWithCommandBuffer:in_BGRATex:outPyramidsArray:error:;
- (int)_doSolverWithCommandBuffer:currentFeatures:currentDerivitive:previousFeatures:previousDerivitive:scale:coeff:in_uv_tex:out_uv_tex:out_w_tex:;
- (void)setPyramidSizes;
- (BOOL)_setupBufferAndReturnErrorWithDevice:error:;
- (id)initWithDevice:inputSize:config:;
+ (id)defaultConfig;
+ (id)getNextPyramidLevelSize:;
+ (unsigned int)MaxScales;
@end
