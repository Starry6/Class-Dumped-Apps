@interface GEORerouteInfo : NSObject
@property (nonatomic) double penalty;
@property (nonatomic) NSDate time;
@property (nonatomic) double distanceFromDestination;
- (void)setTime:;
- (id)time;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)updateWithCurrentTime:location:isMostRecentReroute:destinationCoordinate:numThrottledReroutes:;
- (double)penalty;
- (double)distanceFromDestination;
- (void)setDistanceFromDestination:;
+ (BOOL)supportsSecureCoding;
@end
