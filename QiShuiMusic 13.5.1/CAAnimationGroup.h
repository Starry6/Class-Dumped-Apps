@interface CAAnimationGroup : CAAnimation
@property (nonatomic) NSArray animations;
- (id)_copyRenderAnimationForLayer:;
- (id)animations;
- (void)setDefaultDuration:;
- (void)applyForTime:presentationObject:modelObject:;
- (void)setAnimations:;
- (unsigned int)_propertyFlagsForLayer:;
- (void)CA_prepareRenderValue;
@end
