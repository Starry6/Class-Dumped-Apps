@interface PLRevGeoPlaceInfo : NSObject
@property (nonatomic) NSString placeName;
@property (nonatomic) BOOL hasArea;
@property (nonatomic) double minimumArea;
@property (nonatomic) double maximumArea;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)placeName;
- (BOOL)hasArea;
- (id)initWithPlaceName:;
- (void)addPlaceInfoArea:;
- (double)minimumArea;
- (double)maximumArea;
+ (BOOL)supportsSecureCoding;
@end
