@interface INTrainReservation : INReservation
@property (nonatomic) INSeat reservedSeat;
@property (nonatomic) INTrainTrip trainTrip;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_duration;
- (id)reservedSeat;
- (id)trainTrip;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:URL:reservedSeat:trainTrip:;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:reservedSeat:trainTrip:;
+ (BOOL)supportsSecureCoding;
@end
