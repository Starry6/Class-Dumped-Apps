@interface ARRaycastResult : NSObject
@property (nonatomic) q target;
@property (nonatomic) ARAnchor anchor;
@property (nonatomic) {?=[4]} localTransform;
@property (nonatomic) NSUUID anchorIdentifier;
@property (nonatomic) {?=[4]} worldTransform;
@property (nonatomic) q targetAlignment;
- (id)anchor;
- (void)setAnchor:;
- (void)setTarget:;
- (void).cxx_destruct;
- (long long)target;
- (id)description;
- (void)setLocalTransform:;
- (id)localTransform;
- (id)worldTransform;
- (id)_description:;
- (long long)targetAlignment;
- (id)initWithWorldTransform:target:targetAlignment:;
- (id)anchorIdentifier;
- (void)setAnchorIdentifier:;
@end
