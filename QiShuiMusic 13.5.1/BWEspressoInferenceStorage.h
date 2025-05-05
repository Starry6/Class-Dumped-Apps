@interface BWEspressoInferenceStorage : BWInferenceProviderStorage
- (void)dealloc;
- (id)bindingNameForRequirement:;
- (id)newSampleBufferSatisfyingRequirement:withPropagationSampleBuffer:;
- (id)initWithBindingNameByRequirement:requirementsNeedingPixelBuffers:requirementsNeedingPixelBufferPools:requirementsNeedingTensors:;
- (id)newMetadataDictionarySatisfyingRequirement:;
- (void)addPixelBufferInUseRequirement:;
- (void)clear;
- (id)tensorForRequirement:;
- (void)addTensorInUseRequirement:;
@end
