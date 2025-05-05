@interface PSPointerAccessory : NSObject
@property (nonatomic) PSPointerShape shape;
@property (nonatomic) double offset;
@property (nonatomic) double angle;
@property (nonatomic) BOOL orientationMatchesAngle;
- (void)setShape:;
- (void)setOffset:;
- (id)shape;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)offset;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (double)angle;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)orientationMatchesAngle;
- (void)setOrientationMatchesAngle:;
- (void)setAngle:;
+ (BOOL)supportsSecureCoding;
@end
