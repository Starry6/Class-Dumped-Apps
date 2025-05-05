@interface SAWeatherLocationDeleteCompleted : SABaseCommand
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)locationDeleteCompleted;
+ (id)locationDeleteCompletedWithDictionary:context:;
@end
