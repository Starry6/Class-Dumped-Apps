@interface SAWeatherBarometricPressure : AceObject
@property (nonatomic) NSString trend;
@property (nonatomic) NSString value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
- (id)trend;
- (void)setTrend:;
+ (id)barometricPressure;
+ (id)barometricPressureWithDictionary:context:;
@end
