@interface SAWeatherLocationSearchCompleted : SABaseCommand
@property (nonatomic) NSArray weatherLocations;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)initWithWeatherLocations:;
- (id)weatherLocations;
- (void)setWeatherLocations:;
+ (id)locationSearchCompleted;
+ (id)locationSearchCompletedWithDictionary:context:;
+ (id)locationSearchCompletedWithWeatherLocations:;
@end
