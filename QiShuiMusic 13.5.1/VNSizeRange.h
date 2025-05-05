@interface VNSizeRange : NSObject
@property (nonatomic) Q minimumDimension;
@property (nonatomic) Q maximumDimension;
@property (nonatomic) Q idealDimension;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithMinimumDimension:maximumDimension:idealDimension:;
- (BOOL)isAllowedDimension:;
- (unsigned long long)minimumDimension;
- (unsigned long long)maximumDimension;
- (unsigned long long)idealDimension;
+ (BOOL)supportsSecureCoding;
@end
