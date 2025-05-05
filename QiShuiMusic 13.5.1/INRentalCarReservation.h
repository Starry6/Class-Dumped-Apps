@interface INRentalCarReservation : INReservation
@property (nonatomic) INRentalCar rentalCar;
@property (nonatomic) INDateComponentsRange rentalDuration;
@property (nonatomic) CLPlacemark pickupLocation;
@property (nonatomic) CLPlacemark dropOffLocation;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_duration;
- (id)pickupLocation;
- (id)dropOffLocation;
- (id)rentalCar;
- (id)rentalDuration;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:URL:rentalCar:rentalDuration:pickupLocation:dropOffLocation:;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:rentalCar:rentalDuration:pickupLocation:dropOffLocation:;
+ (BOOL)supportsSecureCoding;
@end
