@interface FigCaptionBackdropLayer : FigBaseCABackdropLayer
- (void)configure;
- (id)init;
- (void)dealloc;
- (void)removeBackdropFromSuperLayer;
- (void)insertBackdropAsSublayerToLayer:below:;
- (void)applyRoundedCorners:;
+ (unsigned char)isSupported;
@end
