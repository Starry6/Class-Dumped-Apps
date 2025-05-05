@interface UIMutableSceneLayerPresentationContext : UISceneLayerPresentationContext
@property (nonatomic) double alpha;
@property (nonatomic) UITransformer transformer;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL clippingDisabled;
@property (nonatomic) Q renderingMode;
- (id)copyWithZone:;
@end
