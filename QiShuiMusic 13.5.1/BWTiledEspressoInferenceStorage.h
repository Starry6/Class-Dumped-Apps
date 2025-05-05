@interface BWTiledEspressoInferenceStorage : BWInferenceProviderStorage
@property (nonatomic) NSArray espressoStorages;
- (void)dealloc;
- (id)initWithRequirementsNeedingPixelBuffers:requirementsNeedingPixelBufferPools:espressoStorages:;
- (id)espressoStorages;
@end
