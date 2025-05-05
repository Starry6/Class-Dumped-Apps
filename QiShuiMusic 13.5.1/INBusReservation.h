@interface INBusReservation : INReservation
@property (nonatomic) INSeat reservedSeat;
@property (nonatomic) INBusTrip busTrip;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_duration;
- (id)reservedSeat;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:url:reservedSeat:busTrip:;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:URL:reservedSeat:busTrip:;
- (id)busTrip;
+ (BOOL)supportsSecureCoding;
@end
