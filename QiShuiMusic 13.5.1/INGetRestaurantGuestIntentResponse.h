@interface INGetRestaurantGuestIntentResponse : INIntentResponse
@property (nonatomic) INRestaurantGuest guest;
@property (nonatomic) INRestaurantGuestDisplayPreferences guestDisplayPreferences;
@property (nonatomic) q code;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_injectProxiesForImages:completion:;
- (id)_dictionaryRepresentation;
- (id)initWithBackingStore:;
- (long long)code;
- (id)initWithCoder:;
- (void)setGuest:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_initWithCode:userActivity:;
- (id)initWithCode:userActivity:;
- (id)guest;
- (id)guestDisplayPreferences;
- (void)setGuestDisplayPreferences:;
+ (BOOL)supportsSecureCoding;
@end
