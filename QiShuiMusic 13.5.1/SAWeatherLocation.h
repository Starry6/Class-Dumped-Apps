@interface SAWeatherLocation : SALocation
@property (nonatomic) NSString locationId;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)locationId;
- (void)setLocationId:;
+ (id)location;
+ (id)locationWithDictionary:context:;
@end
