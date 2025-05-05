@interface SKRange : NSObject
@property (nonatomic) double lowerLimit;
@property (nonatomic) double upperLimit;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (double)lowerLimit;
- (double)upperLimit;
- (id)initWithLowerLimit:upperLimit:;
- (BOOL)isEqualToRange:;
- (void)setLowerLimit:;
- (void)setUpperLimit:;
+ (BOOL)supportsSecureCoding;
+ (id)rangeWithLowerLimit:upperLimit:;
+ (id)rangeWithNoLimits;
+ (id)rangeWithLowerLimit:;
+ (id)rangeWithUpperLimit:;
+ (id)rangeWithConstantValue:;
+ (id)rangeWithValue:variance:;
@end
