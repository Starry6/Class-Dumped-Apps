@interface BWTiledInferenceStorage : BWInferenceProviderStorage
@property (nonatomic) NSArray espressoStorages;
- (void)dealloc;
- (id)textureStorage;
- (void)clear;
- (id)initWithRequirementsNeedingPixelBuffers:requirementsNeedingPixelBufferPools:espressoStorages:;
- (id)espressoStorages;
@end
