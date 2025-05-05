@interface VKTrafficSignalFeature : VKTrafficFeature
@property (nonatomic) q type;
@property (nonatomic) I countryCode;
@property (nonatomic) BOOL hasCountryCode;
- (BOOL)hasCountryCode;
- (unsigned int)countryCode;
- (long long)type;
- (void)populateDebugNode:;
- (id)initWithTrafficSignalType:uniqueIdentifier:routeOffset:onRoute:;
- (id)initWithTrafficSignal:onRoute:;
+ (id)stringForTrafficSignalType:;
@end
