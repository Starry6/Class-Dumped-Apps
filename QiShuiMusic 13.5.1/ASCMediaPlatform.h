@interface ASCMediaPlatform : NSObject
@property (nonatomic) NSNumber deviceCornerRadiusFactor;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithDeviceCornerRadiusFactor:;
- (id)deviceCornerRadiusFactor;
+ (BOOL)supportsSecureCoding;
@end
