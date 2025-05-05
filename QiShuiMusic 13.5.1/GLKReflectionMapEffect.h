@interface GLKReflectionMapEffect : GLKBaseEffect
@property (nonatomic) BOOL dirtyUniforms;
@property (nonatomic) NSInteger matrixLoc;
@property (nonatomic) GLKEffectPropertyTexture textureCubeMap;
@property (nonatomic) (_GLKMatrix3={?=fffffffff}[9f]) matrix;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)prepareToDraw;
- (id)matrix;
- (void)setMatrix:;
- (BOOL)dirtyUniforms;
- (void)setDirtyUniforms:;
- (id)textureCubeMap;
- (int)matrixLoc;
- (void)setMatrixLoc:;
@end
