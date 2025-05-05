@interface INBoatReservation : INReservation
@property (nonatomic) INSeat reservedSeat;
@property (nonatomic) INBoatTrip boatTrip;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_duration;
- (id)reservedSeat;
- (id)boatTrip;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:url:reservedSeat:boatTrip:;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:URL:reservedSeat:boatTrip:;
+ (BOOL)supportsSecureCoding;
@end
