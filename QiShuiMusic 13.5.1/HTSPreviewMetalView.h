@interface HTSPreviewMetalView : HTSGLPreview
- (void)layerInit;
- (void)layerLayout;
- (void)updateColorSpace:;
+ (Class)layerClass;
@end
