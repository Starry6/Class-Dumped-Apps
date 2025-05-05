@interface HTSGLStabFilter : HTSGLFilter
@property (nonatomic) VEMVPRenderer textureMvpRenderer;
@property (nonatomic) NSArray stabMatrix;
@property (nonatomic) {CGSize=dd} stabProcessSize;
- (id)stabProcessSize;
- (id)p_scaleMatrix:scale:;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (void)setStabMatrix:;
- (void)setStabProcessSize:;
- (void)setTextureMvpRenderer:;
- (id)stabMatrix;
- (id)textureMvpRenderer;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
