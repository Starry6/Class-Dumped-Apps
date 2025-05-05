@interface INTicketedEventReservation : INReservation
@property (nonatomic) INTicketedEvent event;
@property (nonatomic) INSeat reservedSeat;
- (id)event;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_duration;
- (id)reservedSeat;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:URL:reservedSeat:event:;
- (id)initWithItemReference:reservationNumber:bookingTime:reservationStatus:reservationHolderName:actions:reservedSeat:event:;
+ (BOOL)supportsSecureCoding;
@end
