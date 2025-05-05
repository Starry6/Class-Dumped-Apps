@interface SNDirectionOfArrivalResult : NSObject
@property (nonatomic) float azimuth;
@property (nonatomic) float elevation;
@property (nonatomic) NSArray spatialSpectrum;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)timeRange;
- (float)azimuth;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setTimeRange:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (float)elevation;
- (id)spatialSpectrum;
+ (BOOL)supportsSecureCoding;
@end
