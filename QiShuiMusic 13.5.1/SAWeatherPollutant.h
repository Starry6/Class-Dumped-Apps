@interface SAWeatherPollutant : SADomainObject
@property (nonatomic) NSNumber amount;
@property (nonatomic) NSString localizedDescription;
@property (nonatomic) NSString name;
- (void)setName:;
- (id)groupIdentifier;
- (id)localizedDescription;
- (id)encodedClassName;
- (void)setLocalizedDescription:;
- (id)name;
- (id)amount;
- (void)setAmount:;
+ (id)pollutant;
+ (id)pollutantWithDictionary:context:;
@end
