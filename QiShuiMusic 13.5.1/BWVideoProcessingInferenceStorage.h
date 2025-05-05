@interface BWVideoProcessingInferenceStorage : BWInferenceProviderStorage
- (void)dealloc;
- (id)newMetadataDictionarySatisfyingRequirement:;
- (id)initWithRequirementsNeedingPixelBuffers:requirementsNeedingPixelBufferPools:;
- (void)setDictionary:forMetadataRequirement:;
@end
