@interface IESGLesTextureRenderer : IESGLesBaseRenderer
- (void)render:config:;
- (void)render:shouldClear:;
- (void)render:vertices:texCoords:;
- (void)render:vertices:texCoords:shouldClear:;
- (void)dealloc;
- (id)initWithContext:;
- (void)render:;
- (void)doInit;
@end
