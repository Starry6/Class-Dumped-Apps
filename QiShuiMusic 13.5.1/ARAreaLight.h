@interface ARAreaLight : NSObject
@property (nonatomic)  direction;
@property (nonatomic) float angularSize;
@property (nonatomic)  color;
- (id)direction;
- (id)initWithCoder:;
- (id)color;
- (void)encodeWithCoder:;
- (id)initWithDirection:angularSize:color:;
- (float)angularSize;
+ (BOOL)supportsSecureCoding;
@end
