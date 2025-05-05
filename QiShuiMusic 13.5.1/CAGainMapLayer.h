@interface CAGainMapLayer : CALayer
@property (nonatomic) NSString renderMode;
- (void)didChangeValueForKey:;
- (void)setRenderMode:;
- (id)_copyRenderLayer:layerFlags:commitFlags:;
- (BOOL)_renderLayerDefinesProperty:;
- (id)renderMode;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:;
+ (BOOL)CA_automaticallyNotifiesObservers:;
@end
