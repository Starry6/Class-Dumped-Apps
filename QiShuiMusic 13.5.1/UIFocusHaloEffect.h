@interface UIFocusHaloEffect : UIFocusEffect
@property (nonatomic) _UIShape _shape;
@property (nonatomic) <UICoordinateSpace> _shapeCoordinateSpace;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView referenceView;
@property (nonatomic) q position;
- (void)setPosition:;
- (long long)position;
- (id)containerView;
- (void)setContainerView:;
- (void)setReferenceView:;
- (void).cxx_destruct;
- (id)referenceView;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_shape;
- (id)_resolvedEffectForItem:;
- (id)_shapeCoordinateSpace;
+ (id)effectWithRect:;
+ (id)effectWithRoundedRect:cornerRadius:curve:;
+ (id)effectWithPath:;
+ (id)_effectWithUIShape:;
@end
