@interface SKRegion : NSObject
@property (nonatomic) r^{CGPath=} path;
- (id)path;
- (BOOL)isEmpty;
- (id)initWithSize:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (id)copyWithZone:;
- (BOOL)containsPoint:;
- (id)initWithRadius:;
- (id)inverseRegion;
- (id)regionByUnionWithRegion:;
- (id)regionByDifferenceFromRegion:;
- (id)regionByIntersectionWithRegion:;
- (void)containsPoints:locationStride:results:resultsStride:count:;
- (BOOL)isEqualToRegion:;
- (BOOL)isInfinite;
+ (BOOL)supportsSecureCoding;
+ (id)infiniteRegion;
@end
