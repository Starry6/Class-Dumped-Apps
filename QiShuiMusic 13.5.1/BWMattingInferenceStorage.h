@interface BWMattingInferenceStorage : BWInferenceProviderStorage
- (void)dealloc;
- (id)newSampleBufferSatisfyingRequirement:withPropagationSampleBuffer:;
- (id)newMetadataDictionarySatisfyingRequirement:;
- (void)setDictionary:forMetadataRequirement:;
@end
