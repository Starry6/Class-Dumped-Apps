@interface CADistanceFieldLayer : CALayer
@property (nonatomic) NSString renderMode;
@property (nonatomic) BOOL invertsShape;
@property (nonatomic) ^{CGColor=} foregroundColor;
@property (nonatomic) double offset;
@property (nonatomic) double sharpness;
@property (nonatomic) double lineWidth;
- (void)_colorSpaceDidChange;
- (void)setLineWidth:;
- (void)setOffset:;
- (id)foregroundColor;
- (void)setForegroundColor:;
- (double)lineWidth;
- (unsigned int)_renderLayerPropertyAnimationFlags:;
- (double)sharpness;
- (void)didChangeValueForKey:;
- (void)setRenderMode:;
- (double)offset;
- (id)_copyRenderLayer:layerFlags:commitFlags:;
- (BOOL)_renderLayerDefinesProperty:;
- (id)renderMode;
- (unsigned int)_renderImageCopyFlags;
- (BOOL)invertsShape;
- (void)setInvertsShape:;
- (void)setSharpness:;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:;
+ (BOOL)CA_automaticallyNotifiesObservers:;
@end
