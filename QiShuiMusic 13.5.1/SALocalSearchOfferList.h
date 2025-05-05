@interface SALocalSearchOfferList : AceObject
@property (nonatomic) NSArray offers;
@property (nonatomic) NSString providerId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)offers;
- (id)encodedClassName;
- (void)setOffers:;
- (id)providerId;
- (void)setProviderId:;
+ (id)offerList;
+ (id)offerListWithDictionary:context:;
@end
