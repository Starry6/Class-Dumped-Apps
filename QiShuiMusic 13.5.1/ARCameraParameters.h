@interface ARCameraParameters : NSObject
@property (nonatomic) {CGSize=dd} imageResolution;
@property (nonatomic) {CGPoint=dd} focalLength;
@property (nonatomic) {CGPoint=dd} principalPoint;
- (id)focalLength;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)imageResolution;
- (id)initWithFocalLength:imageResolution:principalPoint:;
- (id)principalPoint;
+ (BOOL)supportsSecureCoding;
@end
