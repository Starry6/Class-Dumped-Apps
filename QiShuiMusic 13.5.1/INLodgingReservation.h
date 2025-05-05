@interface INLodgingReservation : INReservation
@property (nonatomic) CLPlacemark lodgingBusinessLocation;
@property (nonatomic) INDateComponentsRange reservationDuration;
@property (nonatomic) NSNumber numberOfAdults;
@property (nonatomic) NSNumber numberOfChildren;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_duration;
- (id)lodgingBusinessLocation;
- (id)reservationDuration;
- (id)numberOfAdults;
- (id)numberOfChildren;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:URL:lodgingBusinessLocation:reservationDuration:numberOfAdults:numberOfChildren:;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:lodgingBusinessLocation:reservationDuration:numberOfAdults:numberOfChildren:;
+ (BOOL)supportsSecureCoding;
@end
