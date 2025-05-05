@interface BWInferenceProviderStorage : NSObject
@property (nonatomic) BWInferenceProviderStorage inferenceStorage;
@property (nonatomic) <BWInferenceTextureStorage> textureStorage;
@property (nonatomic) NSArray requirementsNeedingPixelBufferPools;
@property (nonatomic) NSArray requirementsNeedingPixelBuffers;
@property (nonatomic) NSDictionary inferenceResults;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)newSampleBufferSatisfyingRequirement:withPropagationSampleBuffer:;
- (id)textureStorage;
- (void)setPixelBuffer:forRequirement:;
- (id)pixelBufferPoolForRequirement:;
- (id)inferenceStorage;
- (id)requirementsNeedingPixelBuffers;
- (id)newMetadataDictionarySatisfyingRequirement:;
- (void)clear;
- (id)pixelBufferForRequirement:;
- (id)inferenceResults;
- (void)setPixelBufferPool:forRequirement:;
- (id)requirementsNeedingPixelBufferPools;
- (void)setInferenceResults:;
- (id)initWithRequirementsNeedingPixelBuffers:requirementsNeedingPixelBufferPools:;
- (id)newSampleBufferSatisfyingCloneRequirement:;
@end
