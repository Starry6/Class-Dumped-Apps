@interface SCNMTLTessellator : NSObject
- (void)update:;
- (void)dealloc;
- (id)initWithGeometry:resourceManager:;
- (id)_pipelineStateHashForMeshElement:patchType:;
- (unsigned char)pipelineStateHashForMeshElement:patchType:;
- (id)newPipelineStateConfiguratorForMeshElement:patchType:device:;
- (void)draw:;
- (void)updateUniformTessellator:;
- (void)uniformTessellationDrawMeshElement:forMesh:instanceCount:renderContext:;
- (void)updateScreenSpaceAdaptiveTessellator:parameters:;
- (void)screenSpaceAdaptiveTessellationDrawMeshElement:forMesh:instanceCount:renderContext:;
- (void)updateConstrainedEdgeLengthTessellator:parameters:;
- (void)constrainedEdgeLengthTessellationDrawMeshElement:forMesh:instanceCount:renderContext:;
- (void)updateSubdivisionSurfaceTessellator:parameters:;
- (void)subdivisionSurfaceTessellationDraw:;
@end
