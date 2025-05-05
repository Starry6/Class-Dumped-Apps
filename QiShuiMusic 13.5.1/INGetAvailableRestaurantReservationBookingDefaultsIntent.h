@interface INGetAvailableRestaurantReservationBookingDefaultsIntent : INIntent
@property (nonatomic) INRestaurant restaurant;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setRestaurant:;
- (id)restaurant;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithRestaurant:;
+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;
@end
