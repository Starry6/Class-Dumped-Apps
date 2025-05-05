@interface IESGLesTwoTextureRenderer : IESGLesBaseRenderer
- (void)render:config:;
- (void)render:inTextureId2:vertices:texCoords:texCoords2:shouldClear:;
- (void)dealloc;
- (id)initWithContext:;
- (void)doInit;
@end
