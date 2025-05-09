@interface IESLiveGLTFParser : NSObject
@property (nonatomic) ^{cgltf_data=i^v{cgltf_asset=****{cgltf_extras=QQ}Q^{cgltf_extension}}^{cgltf_mesh}Q^{cgltf_material}Q^{cgltf_accessor}Q^{cgltf_buffer_view}Q^{cgltf_buffer}Q^{cgltf_image}Q^{cgltf_texture}Q^{cgltf_sampler}Q^{cgltf_skin}Q^{cgltf_camera}Q^{cgltf_light}Q^{cgltf_node}Q^{cgltf_scene}Q^{cgltf_scene}^{cgltf_animation}Q^{cgltf_material_variant}Q{cgltf_extras=QQ}Q^{cgltf_extension}^*Q^*Q*Q^vQ{cgltf_memory_options=^?^?^v}{cgltf_file_options=^?^?^v}} gltf;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSObject<OS_dispatch_queue> loadQueue;
@property (nonatomic) NSMutableDictionary countsForPrefixes;
- (id)parseAccessors:;
- (id)countsForPrefixes;
- (id)gltf;
- (void)loadGLTFModel:completion:;
- (id)nextUniqueNameWithPrefix:;
- (id)parseAnimations:accessors:;
- (id)parseBufferViews:;
- (id)parseBuffers;
- (id)parseCameras;
- (id)parseImages:;
- (id)parseLights:;
- (id)parseMaterials:textures:;
- (id)parseMesh:node:accessors:bufferViews:materials:colorSpaceLinearSRGB:;
- (id)parseNodes:lights:accessors:bufferViews:materials:colorSpaceLinearSRGB:;
- (id)parseScenes:;
- (void)parseSkin:accessors:geometryNodes:nodes:;
- (id)parseTextures:;
- (void)setCountsForPrefixes:;
- (void)setGltf:;
- (void)setLoadQueue:;
- (id)textureParamsFromTextureView:textures:;
- (id)filePath;
- (id)init;
- (void)setFilePath:;
- (id)loadQueue;
- (void).cxx_destruct;
+ (void)loadGLTFModel:completion:;
@end
