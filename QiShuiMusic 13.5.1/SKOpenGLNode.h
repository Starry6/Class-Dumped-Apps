@interface SKOpenGLNode : SKNode
@property (nonatomic) {CGSize=dd} viewportSize;
- (id)init;
- (id)viewportSize;
- (void)renderForTime:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setViewportSize:;
- (id)initWithViewportSize:;
- (BOOL)needsRenderForTime:;
- (void)_renderForTime:;
+ (id)openGLNodeWithViewportSize:;
@end
