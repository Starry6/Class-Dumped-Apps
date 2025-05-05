@interface SCNMTLSkin : NSObject
- (void)dealloc;
- (id)initWithSkinner:baseMesh:baseGeometry:resourceManager:;
- (void)skinMesh:with:skinner:renderContext:;
@end
