@interface IESMMARPose : NSObject
@property (nonatomic) {?=[4]} transform;
- (void)setTransform:;
- (id)transform;
- (id)copyWithZone:;
- (id)initWithTransform:;
+ (id)identity;
@end
