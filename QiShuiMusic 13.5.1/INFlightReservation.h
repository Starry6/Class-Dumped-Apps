@interface INFlightReservation : INReservation
@property (nonatomic) INSeat reservedSeat;
@property (nonatomic) INFlight flight;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_duration;
- (id)reservedSeat;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:URL:reservedSeat:flight:;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:reservedSeat:flight:;
- (id)flight;
+ (BOOL)supportsSecureCoding;
@end
