@interface SAWeatherLocationAddCompleted : SABaseCommand
@property (nonatomic) NSString error;
@property (nonatomic) NSURL weatherLocationId;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithError:;
- (id)groupIdentifier;
- (void)setError:;
- (id)error;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)initWithWeatherLocationId:;
- (id)weatherLocationId;
- (void)setWeatherLocationId:;
+ (id)locationAddCompleted;
+ (id)locationAddCompletedWithDictionary:context:;
+ (id)locationAddCompletedWithError:;
+ (id)locationAddCompletedWithWeatherLocationId:;
@end
