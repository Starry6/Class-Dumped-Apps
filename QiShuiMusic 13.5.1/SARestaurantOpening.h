@interface SARestaurantOpening : AceObject
@property (nonatomic) NSURL bookingId;
@property (nonatomic) SAUIAppPunchOut makeReservationPunchOut;
@property (nonatomic) NSNumber partySize;
@property (nonatomic) SACalendar timeSlot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)partySize;
- (void)setPartySize:;
- (id)bookingId;
- (void)setBookingId:;
- (id)makeReservationPunchOut;
- (void)setMakeReservationPunchOut:;
- (id)timeSlot;
- (void)setTimeSlot:;
+ (id)opening;
+ (id)openingWithDictionary:context:;
@end
