@interface VERenderer : NSObject
@property (nonatomic) HTSGLContext context;
@property (nonatomic) VETransform transform;
@property (nonatomic) BOOL enableBlend;
- (void)layoutDrawable:;
- (void)setEnableBlend:;
- (void)updatePipeline:;
- (void)customVertexShader:fragmentShader:attributes:;
- (void)deInit;
- (BOOL)enableBlend;
- (void)removeUniform:uniformType:;
- (void)render:config:;
- (void)renderClearColor;
- (void)renderClearColor:;
- (void)setBlendSFactor:dFactor:;
- (void)setClearColorRed:green:blue:alpha:;
- (id)context;
- (void)setTransform:;
- (id)transform;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)doInit;
- (void)addUniform:;
- (id)drawable;
- (void)setDrawable:;
@end
