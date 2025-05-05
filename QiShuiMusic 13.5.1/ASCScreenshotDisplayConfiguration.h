@interface ASCScreenshotDisplayConfiguration : NSObject
@property (nonatomic) NSNumber deviceCornerRadiusFactor;
@property (nonatomic) NSString cornerCurve;
@property (nonatomic) Q maskedCorners;
- (id)cornerCurve;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)maskedCorners;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithDeviceCornerRadiusFactor:;
- (id)deviceCornerRadiusFactor;
- (double)cornerRadiusForSize:;
+ (BOOL)supportsSecureCoding;
+ (double)defaultCornerRadius;
+ (id)defaultConfiguration;
@end
