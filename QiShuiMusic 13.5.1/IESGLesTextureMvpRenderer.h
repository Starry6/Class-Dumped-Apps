@interface IESGLesTextureMvpRenderer : IESGLesBaseMvpRenderer
- (void)render:config:;
- (void)render:inSize:outSize:shouldClear:renderToScreen:;
- (void)dealloc;
- (id)initWithContext:;
- (void)doInit;
@end
