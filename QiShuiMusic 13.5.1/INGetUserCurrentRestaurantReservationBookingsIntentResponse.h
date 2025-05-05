@interface INGetUserCurrentRestaurantReservationBookingsIntentResponse : INIntentResponse
@property (nonatomic) q code;
@property (nonatomic) NSArray userCurrentBookings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)_injectProxiesForImages:completion:;
- (id)_dictionaryRepresentation;
- (id)initWithBackingStore:;
- (long long)code;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_initWithCode:userActivity:;
- (id)initWithCode:userActivity:;
- (id)userCurrentBookings;
- (void)setUserCurrentBookings:;
- (id)initWithUserCurrentBookings:code:userActivity:;
+ (BOOL)supportsSecureCoding;
@end
