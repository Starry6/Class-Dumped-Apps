@interface HTSGLAddMaskLayerFilter : HTSGLFilter
@property (nonatomic) double maskAlpha;
- (void)initializeRenderer:;
- (double)maskAlpha;
- (void)setMaskAlpha:;
- (id)initWithContext:;
@end
