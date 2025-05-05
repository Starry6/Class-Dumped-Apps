@interface INBookRestaurantReservationIntentResponse : INIntentResponse
@property (nonatomic) q code;
@property (nonatomic) INRestaurantReservationUserBooking userBooking;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_injectProxiesForImages:completion:;
- (id)_dictionaryRepresentation;
- (long long)code;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithCode:userActivity:;
- (id)userBooking;
- (void)setUserBooking:;
+ (BOOL)supportsSecureCoding;
@end
