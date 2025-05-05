@interface SALocalSearchOffer : AceObject
@property (nonatomic) NSString identifier;
@property (nonatomic) SAUIAppPunchOut offerPunchOut;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)identifier;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (void)setIdentifier:;
- (id)offerPunchOut;
- (void)setOfferPunchOut:;
+ (id)offer;
+ (id)offerWithDictionary:context:;
@end
