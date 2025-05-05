@interface SCNMTLMorph : NSObject
- (void)dealloc;
- (id)newBufferWithLength:;
- (void)_writeSources:dstTypes:sourcesCount:inBuffer:stride:length:sparse:positionScale:;
- (void)_prepareTargetDataForIndex:morph:baseMesh:;
- (id)initWithMorph:baseGeometry:resourceManager:;
- (void)setNextMorphRequiresReset;
- (unsigned int)sparseIndexSize;
- (BOOL)isCompatibleWithMorph:;
- (void)morphIncrementallyForMorpher:renderContext:positionBuffer:normalBuffer:;
- (void)unifyMeshWithRenderContext:positionBuffer:normalBuffer:;
- (void)_createPipelineStates:;
- (void)morphSparseMorpher:renderContext:positionBuffer:normalBuffer:;
@end
