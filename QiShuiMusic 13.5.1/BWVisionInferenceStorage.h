@interface BWVisionInferenceStorage : BWInferenceProviderStorage
- (void)dealloc;
- (void)removeRequest:;
- (id)newSampleBufferSatisfyingRequirement:withPropagationSampleBuffer:;
- (id)newMetadataDictionarySatisfyingRequirement:;
- (id)initWithRequirementsNeedingPixelBuffers:requirementsNeedingPixelBufferPools:;
- (id)requestForRequirement:;
- (void)setRequest:forRequirement:;
@end
