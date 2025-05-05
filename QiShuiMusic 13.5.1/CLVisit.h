@interface CLVisit : NSObject
@property (nonatomic) BOOL hasArrivalDate;
@property (nonatomic) BOOL hasDepartureDate;
@property (nonatomic) NSDate detectionDate;
@property (nonatomic) _CLPlaceInference _placeInference;
@property (nonatomic) NSDate arrivalDate;
@property (nonatomic) NSDate departureDate;
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
@property (nonatomic) double horizontalAccuracy;
- (id)arrivalDate;
- (void)dealloc;
- (double)horizontalAccuracy;
- (id)departureDate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)hasArrivalDate;
- (id)coordinate;
- (id)description;
- (id)detectionDate;
- (BOOL)hasDepartureDate;
- (id)copyWithZone:;
- (id)_placeInference;
- (id)initWithCoordinate:horizontalAccuracy:arrivalDate:departureDate:detectionDate:placeInference:;
- (id)initWithCoordinate:horizontalAccuracy:arrivalDate:departureDate:detectionDate:;
+ (BOOL)supportsSecureCoding;
@end
