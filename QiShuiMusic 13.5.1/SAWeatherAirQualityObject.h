@interface SAWeatherAirQualityObject : SADomainObject
@property (nonatomic) q airQualityIndex;
@property (nonatomic) SAWeatherLocation airQualityLocation;
@property (nonatomic) NSString airQualityRatingCategory;
@property (nonatomic) NSString localizedCategoryName;
@property (nonatomic) NSArray pollutants;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)localizedCategoryName;
- (void)setLocalizedCategoryName:;
- (long long)airQualityIndex;
- (void)setAirQualityIndex:;
- (id)airQualityLocation;
- (void)setAirQualityLocation:;
- (id)airQualityRatingCategory;
- (void)setAirQualityRatingCategory:;
- (id)pollutants;
- (void)setPollutants:;
+ (id)airQualityObject;
+ (id)airQualityObjectWithDictionary:context:;
@end
