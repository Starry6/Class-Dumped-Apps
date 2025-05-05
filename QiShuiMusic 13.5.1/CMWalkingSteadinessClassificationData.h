@interface CMWalkingSteadinessClassificationData : NSObject
@property (nonatomic) double lowerBound;
@property (nonatomic) double upperBound;
@property (nonatomic) q classificationType;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithLowerBound:upperBound:classificationType:;
- (double)lowerBound;
- (double)upperBound;
- (long long)classificationType;
+ (BOOL)supportsSecureCoding;
@end
