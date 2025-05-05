@interface CACarPlayRegionLayer : CALayer
@property (nonatomic) NSString identifier;
- (id)identifier;
- (id)_copyRenderLayer:layerFlags:commitFlags:;
- (void)setIdentifier:;
+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:;
@end
