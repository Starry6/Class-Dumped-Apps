@interface BWInferenceSimpleStorage : NSObject
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
- (id)textureStorage;
- (void)setPixelBuffer:forRequirement:;
- (id)pixelBufferPoolForRequirement:;
- (id)inferenceStorage;
- (id)requirementsNeedingPixelBuffers;
- (void)clear;
- (id)pixelBufferForRequirement:;
- (id)initWithRequirementsNeedingPools:;
- (id)inferenceResults;
- (void)setPixelBufferPool:forRequirement:;
- (id)requirementsNeedingPixelBufferPools;
- (void)setInferenceResults:;
@end
