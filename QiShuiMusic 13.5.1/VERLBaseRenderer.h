@interface VERLBaseRenderer : VERenderer
@property (nonatomic) <IVERendererDrawable> rlDrawable;
- (void)layoutDrawable:;
- (void)updatePipeline:;
- (int)teUniformTypeFromVEUniformType:;
- (void)customVertexShader:fragmentShader:attributes:;
- (void)deInit;
- (void)removeUniform:uniformType:;
- (void)renderClearColor:;
- (int)rlAttrTypeFromIESAttrType:;
- (id)rlDrawable;
- (void)setClearColorRed:green:blue:alpha:;
- (void)setRlDrawable:;
- (void)dealloc;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)addUniform:;
- (id)drawable;
- (void)setDrawable:;
@end
