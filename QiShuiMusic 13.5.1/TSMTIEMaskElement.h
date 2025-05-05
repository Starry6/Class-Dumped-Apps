@interface TSMTIEMaskElement : NSObject
@property (nonatomic) double a;
@property (nonatomic) double b;
@property (nonatomic) double lowerLimit;
@property (nonatomic) double upperLimit;
- (double)b;
- (double)a;
- (id)initWithDictionary:;
- (id)copyWithZone:;
- (id)initWithCoefficient:offset:lowerLimit:upperLimit:;
- (double)lowerLimit;
- (double)upperLimit;
@end
