@interface UIPointerAccessory : NSObject
@property (nonatomic) UIPointerShape shape;
@property (nonatomic) {?=dd} position;
@property (nonatomic) BOOL orientationMatchesAngle;
- (void)setPosition:;
- (void)setShape:;
- (id)position;
- (id)shape;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)orientationMatchesAngle;
- (void)setOrientationMatchesAngle:;
+ (id)accessoryWithShape:position:;
+ (id)arrowAccessoryWithPosition:;
@end
