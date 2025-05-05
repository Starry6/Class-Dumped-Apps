@interface ARGPUCubemapProjector : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)projectToCube:transformWorldFromCube:meshes:blend:;
+ (id)createCubemap:;
@end
