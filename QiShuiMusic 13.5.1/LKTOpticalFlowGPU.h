@interface LKTOpticalFlowGPU : LKTOpticalFlow
- (void)dealloc;
- (void).cxx_destruct;
- (void)waitUntilCompleted;
- (id)initWithMetalContext:width:height:numScales:error:;
- (BOOL)setOutputUV:error:;
- (BOOL)estimateFlowFromReference:target:error:;
- (BOOL)estimateFlowStream:error:;
- (void)_initMemory:height:numScales:;
- (BOOL)_setupPipelinesReturnError:;
- (BOOL)_setupBufferAndReturnError:;
- (void)_computeOpticalFlow;
- (BOOL)_createImagePyramidWithCommandBuffer:in_pixelbuf:I_idx:error:;
- (void)_zeroFlowWithCommandBuffer:uv_tex:;
- (void)_downscale2XWithCommandBuffer:in_u32_alias_tex:out_u32_alias_tex:;
- (void)_computeFeaturesWithCommandBuffer:in_tex:out_tex:;
- (void)_computeFeaturesDerivativesWithCommandBuffer:in_tex:out_tex:;
- (void)_doSolverWithCommandBuffer:scale:scale_xy_inv:coeff:in_uv_tex:out_uv_tex:out_w_tex:;
- (void)_doNLRegularizationWithCommandBuffer:in_uv_tex:join_tex:w_tex:out_uv_tex:;
@end
