@interface SKWarpGeometry : NSObject
@property (nonatomic) BOOL isIdentityWarp;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (BOOL)isIdentityWarp;
+ (BOOL)supportsSecureCoding;
@end
