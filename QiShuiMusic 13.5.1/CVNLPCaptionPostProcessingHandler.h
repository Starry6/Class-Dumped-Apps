@interface CVNLPCaptionPostProcessingHandler : NSObject
@property (nonatomic) NSCharacterSet trimSet;
@property (nonatomic) CVNLPCaptionRuntimeParameters runtimeParameters;
- (void).cxx_destruct;
- (id)initWithOptions:runtimeParameters:;
- (id)postProcessCaptions:genderOption:error:;
- (id)postProcessCaptions:visionObservations:;
- (id)_excludeGenderReplacements:genderOption:error:;
- (id)_excludeGenderTriggers:genderOption:error:;
- (id)_replacements:genderOption:;
- (BOOL)_checkAboveThreshold:observationConfidence:difference:;
- (id)_checkForBlockingTokens:blockingTokens:;
- (id)_checkForBlockingTokens:visionObservations:;
- (id)_filterVisionObservations:;
- (id)trimSet;
- (id)runtimeParameters;
@end
