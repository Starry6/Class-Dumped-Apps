@interface CMVO2MaxClassificationData : NSObject
@property (nonatomic) q biologicalSex;
@property (nonatomic) q ageLowerBound;
@property (nonatomic) q ageUpperBound;
@property (nonatomic) q classificationType;
@property (nonatomic) double vo2MaxLowerBound;
@property (nonatomic) double vo2MaxUpperBound;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (long long)classificationType;
- (id)initWithBiologicalSex:ageLowerBound:ageUpperBound:classificationType:vo2MaxLowerBound:vo2MaxUpperBound:;
- (long long)biologicalSex;
- (long long)ageLowerBound;
- (long long)ageUpperBound;
- (double)vo2MaxLowerBound;
- (double)vo2MaxUpperBound;
+ (BOOL)supportsSecureCoding;
@end
