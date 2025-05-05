@interface VEPreviewMetalView : VEPreviewUnit
- (void)layerInit;
- (void)layerLayout;
- (void)updateColorSpace:finishBlock:;
- (void)updateLayerColorSpace:;
+ (Class)layerClass;
@end
