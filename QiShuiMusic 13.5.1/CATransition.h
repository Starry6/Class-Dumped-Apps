@interface CATransition : CAAnimation
@property (nonatomic) NSDictionary options;
@property (nonatomic) I transitionFlags;
@property (nonatomic) NSString type;
@property (nonatomic) NSString subtype;
@property (nonatomic) float startProgress;
@property (nonatomic) float endProgress;
- (id)_copyRenderAnimationForLayer:;
- (id)subtype;
- (void)setOptions:;
- (BOOL)_setCARenderAnimation:layer:;
- (id)filter;
- (void)setFilter:;
- (void)setType:;
- (void)setSubtype:;
- (void)setTransitionFlags:;
- (id)options;
- (id)type;
- (float)endProgress;
- (void)setEndProgress:;
- (float)startProgress;
- (unsigned int)transitionFlags;
- (void)setStartProgress:;
- (unsigned int)_propertyFlagsForLayer:;
@end
