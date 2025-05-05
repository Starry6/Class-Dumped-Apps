@interface INRestaurantReservation : INReservation
@property (nonatomic) INDateComponentsRange reservationDuration;
@property (nonatomic) NSNumber partySize;
@property (nonatomic) CLPlacemark restaurantLocation;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_duration;
- (id)reservationDuration;
- (id)partySize;
- (id)restaurantLocation;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:URL:reservationDuration:partySize:restaurantLocation:;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:reservationDuration:partySize:restaurantLocation:;
+ (BOOL)supportsSecureCoding;
@end
