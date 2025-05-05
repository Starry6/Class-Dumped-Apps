@interface LNParameterConfiguration : NSObject
@property (nonatomic) BOOL forcesNeedsValue;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)forcesNeedsValue;
- (void)setForcesNeedsValue:;
+ (BOOL)supportsSecureCoding;
@end
