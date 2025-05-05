@interface VKTrafficCameraFeature : VKTrafficFeature
@property (nonatomic) q type;
@property (nonatomic) I speedThreshold;
@property (nonatomic) BOOL isAboveSpeedThreshold;
@property (nonatomic) NSString speedLimitText;
@property (nonatomic) I countryCode;
@property (nonatomic) BOOL hasCountryCode;
- (BOOL)hasCountryCode;
- (unsigned int)countryCode;
- (long long)type;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)speedLimitText;
- (unsigned int)speedThreshold;
- (BOOL)isAboveSpeedThreshold;
- (BOOL)isSpeedLimitCamera;
- (void)populateDebugNode:;
- (id)initWithTrafficCameraType:uniqueIdentifier:routeOffset:onRoute:;
- (id)initWithTrafficCamera:onRoute:;
- (void)setIsAboveSpeedThreshold:;
+ (id)stringForTrafficCameraType:;
@end
