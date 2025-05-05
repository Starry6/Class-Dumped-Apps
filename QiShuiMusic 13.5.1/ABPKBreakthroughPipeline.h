@interface ABPKBreakthroughPipeline : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithFrequency:;
- (BOOL)overlayResult:OnImage:andGenerateOverlayImage:;
- (int)runWithInput:atTimeStamp:andOutput:;
@end
