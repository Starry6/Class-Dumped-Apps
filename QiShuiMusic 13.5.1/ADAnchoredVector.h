@interface ADAnchoredVector : NSObject
@property (nonatomic)  origin;
@property (nonatomic)  direction;
- (id)direction;
- (void)setDirection:;
- (void)setOrigin:;
- (id)origin;
- (id)description;
- (id)vectorByChangingPOV:;
- (id)intersectWithPlane:normal:;
+ (id)vectorWithOrigin:direction:;
+ (id)vectorWithTransform:;
@end
