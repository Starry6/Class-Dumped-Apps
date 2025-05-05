@interface PKFloatRange : NSObject
@property (nonatomic) double lowerBound;
@property (nonatomic) double upperBound;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (double)lowerBound;
- (double)upperBound;
- (id)initWithLowerBound:upperBound:;
@end
