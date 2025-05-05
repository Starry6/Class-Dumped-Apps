@interface CACloningTerminatorLayer : CALayer
- (id)_copyRenderLayer:layerFlags:commitFlags:;
+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:;
@end
