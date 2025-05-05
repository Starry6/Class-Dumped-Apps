@interface UIRegion : NSObject
@property (nonatomic) UIBezierPath path;
@property (nonatomic) PKRegion _region;
- (id)path;
- (id)initWithSize:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (id)copyWithZone:;
- (id)_region;
- (BOOL)containsPoint:;
- (id)initWithRadius:;
- (id)inverseRegion;
- (id)regionByUnionWithRegion:;
- (id)regionByDifferenceFromRegion:;
- (id)regionByIntersectionWithRegion:;
- (void)containsPoints:locationStride:results:resultsStride:count:;
+ (id)infiniteRegion;
@end
