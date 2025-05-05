@interface INHomeAttributeRange : NSObject
@property (nonatomic) double lowerValue;
@property (nonatomic) double upperValue;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithRange:upperValue:;
- (double)lowerValue;
- (double)upperValue;
+ (BOOL)supportsSecureCoding;
@end
