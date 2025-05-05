@interface VNCircle : NSObject
@property (nonatomic) VNPoint center;
@property (nonatomic) double radius;
@property (nonatomic) double diameter;
- (id)center;
- (id)init;
- (double)radius;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (double)diameter;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)containsPoint:;
- (id)initWithCenter:radius:;
- (id)initWithCenter:diameter:;
- (BOOL)containsPoint:inCircumferentialRingOfWidth:;
+ (BOOL)supportsSecureCoding;
+ (id)zeroCircle;
@end
