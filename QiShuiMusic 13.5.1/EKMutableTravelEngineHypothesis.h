@interface EKMutableTravelEngineHypothesis : EKTravelEngineHypothesis
@property (nonatomic) NSInteger transportType;
@property (nonatomic) NSDate conservativeDepartureDate;
@property (nonatomic) double conservativeTravelTime;
@property (nonatomic) NSDate suggestedDepartureDate;
@property (nonatomic) double estimatedTravelTime;
@property (nonatomic) NSDate aggressiveDepartureDate;
@property (nonatomic) double aggressiveTravelTime;
@property (nonatomic) NSString routeName;
@property (nonatomic) BOOL supportsLiveTraffic;
@property (nonatomic) Q currentTrafficDensity;
@property (nonatomic) NSString trafficDensityDescription;
@property (nonatomic) q travelState;
- (void)setTransportType:;
- (void)setRouteName:;
- (id)copyWithZone:;
- (void)setSupportsLiveTraffic:;
- (void)setAggressiveTravelTime:;
- (void)setConservativeTravelTime:;
- (void)setConservativeDepartureDate:;
- (void)setSuggestedDepartureDate:;
- (void)setEstimatedTravelTime:;
- (void)setAggressiveDepartureDate:;
- (void)setCurrentTrafficDensity:;
- (void)setTrafficDensityDescription:;
- (void)setTravelState:;
@end
