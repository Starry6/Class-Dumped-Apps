@interface ARHitTestResult : NSObject
@property (nonatomic) ARAnchor anchor;
@property (nonatomic) double distance;
@property (nonatomic) {?=[4]} localTransform;
@property (nonatomic) {?=[4]} worldTransform;
@property (nonatomic) Q type;
- (double)distance;
- (id)anchor;
- (id)debugQuickLookObject;
- (void)setDistance:;
- (void)setAnchor:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:;
- (void)setLocalTransform:;
- (id)localTransform;
- (id)worldTransform;
- (id)_description:;
- (void)setWorldTransform:;
@end
