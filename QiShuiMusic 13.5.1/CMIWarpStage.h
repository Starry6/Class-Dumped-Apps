@interface CMIWarpStage : NSObject
- (int)runWarpUsingTransform:inputTex:outputTex:;
- (int)runWarpUsingTransform:inputLumaTex:inputChromaTex:outputLumaTex:outputChromaTex:inputFrameGDCParams:outputFrameGDCParams:;
- (int)runGDCWithInputLuma:inputChromaTex:outputLumaTex:outputChromaTex:warpConfig:gdcParams:inverseGDC:;
- (int)runWarpUsingTransform:inputTex:outputTex:inputFrameGDCParams:outputFrameGDCParams:;
- (id)initWithOptionalCommandQueue:allocator:;
- (int)_compileShaders;
- (void).cxx_destruct;
- (int)runGDC:outputTex:warpConfig:gdcParams:inverseGDC:;
- (int)runWarpUsingTransform:inputLumaTex:inputChromaTex:outputLumaTex:outputChromaTex:;
- (int)runWarpUsingTransform:inputBayerTex:firstPix:outputRGBTex:;
@end
