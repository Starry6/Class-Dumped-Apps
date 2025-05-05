@interface HTSGLTransformFilter : HTSGLFilter
@property (nonatomic) {CGAffineTransform=dddddd} affineTransform;
@property (nonatomic) {CATransform3D=dddddddddddddddd} transform3D;
@property (nonatomic) BOOL ignoreAspectRatio;
@property (nonatomic) BOOL anchorTopLeft;
- (BOOL)anchorTopLeft;
- (void)convert3DTransform:toMatrix:;
- (BOOL)ignoreAspectRatio;
- (void)initializeRenderer:;
- (void)loadOrthoMatrix:left:right:bottom:top:near:far:;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (void)setAnchorTopLeft:;
- (void)setIgnoreAspectRatio:;
- (void)setupFilterForSize:;
- (id)transform3D;
- (void)setTransform3D:;
- (id)affineTransform;
- (id)initWithContext:;
- (void)setAffineTransform:;
@end
