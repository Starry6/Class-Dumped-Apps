@interface CPLPlaceAnnotation : NSObject
@property (nonatomic) NSNumber placeLevel;
@property (nonatomic) NSString placeName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)placeName;
- (void)setPlaceName:;
- (id)placeLevel;
- (void)setPlaceLevel:;
+ (BOOL)supportsSecureCoding;
@end
