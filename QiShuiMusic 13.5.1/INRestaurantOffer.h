@interface INRestaurantOffer : NSObject
@property (nonatomic) NSString offerTitleText;
@property (nonatomic) NSString offerDetailText;
@property (nonatomic) NSString offerIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)offerTitleText;
- (void)setOfferTitleText:;
- (id)offerDetailText;
- (void)setOfferDetailText:;
- (id)offerIdentifier;
- (void)setOfferIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
