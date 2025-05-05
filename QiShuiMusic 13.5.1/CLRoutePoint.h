@interface CLRoutePoint : NSObject
@property (nonatomic) double latitude_deg;
@property (nonatomic) double longitude_deg;
@property (nonatomic) double altitude_m;
@property (nonatomic) double odometer_m;
@property (nonatomic) double timestamp_s;
@property (nonatomic) NSInteger signalEnvironmentType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)timestamp_s;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)signalEnvironmentType;
- (id)initWithLatitude:longitude:altitude:odometer:timestamp:signalEnvironmentType:;
- (double)latitude_deg;
- (double)longitude_deg;
- (double)altitude_m;
- (double)odometer_m;
+ (BOOL)supportsSecureCoding;
@end
