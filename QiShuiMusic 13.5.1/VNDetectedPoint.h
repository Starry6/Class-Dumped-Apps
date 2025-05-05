@interface VNDetectedPoint : VNPoint
@property (nonatomic) float confidence;
- (float)confidence;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)transformedWith:;
- (id)initWithLocation:confidence:;
+ (BOOL)supportsSecureCoding;
@end
