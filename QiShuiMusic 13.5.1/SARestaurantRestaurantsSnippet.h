@interface SARestaurantRestaurantsSnippet : SAUISirilandSnippet
@property (nonatomic) NSArray attributionOrder;
@property (nonatomic) NSArray contributingProviderIds;
@property (nonatomic) NSDictionary providerPunchOutMap;
@property (nonatomic) NSArray restaurants;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)attributionOrder;
- (void)setAttributionOrder:;
- (id)contributingProviderIds;
- (void)setContributingProviderIds:;
- (id)providerPunchOutMap;
- (void)setProviderPunchOutMap:;
- (id)restaurants;
- (void)setRestaurants:;
+ (id)restaurantsSnippet;
+ (id)restaurantsSnippetWithDictionary:context:;
@end
