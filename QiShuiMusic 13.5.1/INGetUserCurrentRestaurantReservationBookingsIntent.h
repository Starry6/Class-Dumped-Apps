@interface INGetUserCurrentRestaurantReservationBookingsIntent : INIntent
@property (nonatomic) INRestaurant restaurant;
@property (nonatomic) NSString reservationIdentifier;
@property (nonatomic) NSNumber maximumNumberOfResults;
@property (nonatomic) NSDate earliestBookingDateForResults;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEarliestBookingDateForResults:;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (void)setMaximumNumberOfResults:;
- (id)earliestBookingDateForResults;
- (void)encodeWithCoder:;
- (void)setRestaurant:;
- (id)restaurant;
- (void).cxx_destruct;
- (id)reservationIdentifier;
- (id)initWithRestaurant:reservationIdentifier:maximumNumberOfResults:earliestBookingDateForResults:;
- (id)maximumNumberOfResults;
- (void)setReservationIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;
@end
