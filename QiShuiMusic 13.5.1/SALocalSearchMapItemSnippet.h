@interface SALocalSearchMapItemSnippet : SAUISnippet
@property (nonatomic) BOOL chainResultSet;
@property (nonatomic) NSArray items;
@property (nonatomic) NSArray providerCommand;
@property (nonatomic) NSNumber regionOfInterestRadiusInMiles;
@property (nonatomic) BOOL searchAlongRoute;
@property (nonatomic) SALocation searchRegionCenter;
@property (nonatomic) NSNumber userCurrentLocation;
- (id)groupIdentifier;
- (id)items;
- (void)setItems:;
- (id)encodedClassName;
- (BOOL)chainResultSet;
- (id)providerCommand;
- (void)setChainResultSet:;
- (void)setProviderCommand:;
- (id)regionOfInterestRadiusInMiles;
- (void)setRegionOfInterestRadiusInMiles:;
- (BOOL)searchAlongRoute;
- (void)setSearchAlongRoute:;
- (id)searchRegionCenter;
- (void)setSearchRegionCenter:;
- (id)userCurrentLocation;
- (void)setUserCurrentLocation:;
+ (id)mapItemSnippet;
+ (id)mapItemSnippetWithDictionary:context:;
@end
