@interface Pyramid : FRCMetalBase
- (void).cxx_destruct;
- (id)initWithDevice:commmandQueue:;
- (void)createResiduePyramidFromBuffer:toBuffer:levels:;
- (void)encodeResiduePyramidToCommandBuffer:fromTexture:toTexture:levels:;
- (void)encodeSubsampleTextureToCommandBuffer:source:destination:clampToEdge:;
- (void)encodeResidueToCommandBuffer:base:low:destination:;
- (void)encodeResidueInplaceToCommandBuffer:base:low:;
- (void)encodeShuffleToCommandBuffer:full:quarter:destination:;
- (void)blendWarpedResidueForward:backward:withGridNetOutput:timeScale:destination:callback:;
- (void)encodeLayerBlendToCommandBuffer:forwardResidue:backwardResidue:withBaseLayer:timeScale:destination:;
- (void)encodeFeatureBackwarpToCommandBuffer:feature:forwardFlow:backwardFlow:timeScale:destination:;
@end
