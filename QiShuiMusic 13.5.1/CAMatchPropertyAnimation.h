@interface CAMatchPropertyAnimation : CAAnimation
@property (nonatomic) CALayer sourceLayer;
@property (nonatomic) Q sourceLayerRenderId;
@property (nonatomic) I sourceContextId;
@property (nonatomic) NSString keyPath;
@property (nonatomic) BOOL additive;
- (id)_copyRenderAnimationForLayer:;
- (BOOL)_setCARenderAnimation:layer:;
- (void)setSourceLayer:;
- (unsigned long long)sourceLayerRenderId;
- (void)setAdditive:;
- (unsigned int)sourceContextId;
- (void)applyForTime:presentationObject:modelObject:;
- (BOOL)isAdditive;
- (void)setKeyPath:;
- (void)setSourceContextId:;
- (void)setSourceLayerRenderId:;
- (id)keyPath;
- (unsigned int)_propertyFlagsForLayer:;
- (id)sourceLayer;
@end
