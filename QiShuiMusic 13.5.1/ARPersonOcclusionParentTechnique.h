@interface ARPersonOcclusionParentTechnique : ARParentTechnique
@property (nonatomic) <ARTechniqueForwardingStrategy> depthTechniqueProcessingStrategy;
@property (nonatomic) q optimizationStrategy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)processData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)requestResultDataAtTimestamp:context:;
- (void)technique:didOutputResultData:timestamp:context:;
- (void)reconfigureFrom:;
- (id)initWithTechniques:delegate:;
- (void)setTechniques:;
- (void)setOptimizationStrategy:;
- (id)techniquesToRunWithForwardedDepth:;
- (id)depthTechniqueProcessingStrategy;
- (void)setDepthTechniqueProcessingStrategy:;
- (long long)optimizationStrategy;
@end
