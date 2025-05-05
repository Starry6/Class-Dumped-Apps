@interface PLRevGeoMapItemAdditionalPlaceInfo : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSNumber placeType;
@property (nonatomic) Q dominantOrderType;
@property (nonatomic) double areaInSquareMeters;
- (id)placeType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)initWithName:placeType:dominantOrderType:areaInSquareMeters:;
- (unsigned long long)dominantOrderType;
- (double)areaInSquareMeters;
+ (BOOL)supportsSecureCoding;
@end
