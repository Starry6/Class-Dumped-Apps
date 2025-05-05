@interface Normalization : FRCMetalBase
@property (nonatomic) BOOL selfNormalization;
- (id)init;
- (void).cxx_destruct;
- (void)setupMetal;
- (id)calcDeNormParamsFromNormaParams:timeScale:;
- (id)calcAnchorParamsFromNormParams:anchor:;
- (id)calcFrameStatistics:;
- (id)calcTextureStatistics:;
- (void)encodeNormalizationToCommandBuffer:source:destination:params:;
- (id)normalizeFramesFirstInput:secondInput:firstOutput:secondOutput:callback:;
- (void)normalizeWithParmas:firstInput:secondInput:firstOutput:secondOutput:;
- (void)encodeDenormalizationToCommandBuffer:source:destination:params:;
- (void)denormalizeFrame:destination:params:timeScale:callback:;
- (BOOL)selfNormalization;
- (void)setSelfNormalization:;
@end
