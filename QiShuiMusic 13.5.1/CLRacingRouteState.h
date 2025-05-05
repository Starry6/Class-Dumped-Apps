@interface CLRacingRouteState : NSObject
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double altitude;
@property (nonatomic) double odometer;
@property (nonatomic) double timestamp;
@property (nonatomic) double timeSinceStart;
@property (nonatomic) double offRouteTime;
@property (nonatomic) double distanceSinceStart;
@property (nonatomic) double offRouteDistance;
@property (nonatomic) double averagePace;
@property (nonatomic) double distanceAlongReference;
- (double)altitude;
- (double)latitude;
- (double)odometer;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (double)timeSinceStart;
- (double)timestamp;
- (double)longitude;
- (id)copyWithZone:;
- (id)initWithLatitude:longitude:altitude:odometer:timestamp:timeSinceStart:offRouteTime:distanceSinceStart:offRouteDistance:averagePace:distanceAlongReference:;
- (double)offRouteTime;
- (double)distanceSinceStart;
- (double)offRouteDistance;
- (double)averagePace;
- (double)distanceAlongReference;
+ (BOOL)supportsSecureCoding;
@end
