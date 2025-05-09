@interface CMFitnessMachineData : NSObject
@property (nonatomic) NSDate timestamp;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double totalEnergy;
@property (nonatomic) double totalDistance;
@property (nonatomic) double totalElevationAscended;
@property (nonatomic) q totalStrideCount;
@property (nonatomic) q totalStrokeCount;
@property (nonatomic) q totalFloorsClimbed;
@property (nonatomic) double instantaneousSpeed;
@property (nonatomic) double instantaneousCadence;
@property (nonatomic) double instantaneousPower;
@property (nonatomic) double inclination;
@property (nonatomic) double resistanceLevel;
- (void)setElapsedTime:;
- (void)dealloc;
- (double)elapsedTime;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)timestamp;
- (id)description;
- (void)setTotalDistance:;
- (id)initWithTimestamp:;
- (double)totalDistance;
- (id)copyWithZone:;
- (void)convertToCLFitnessMachineData:;
- (double)totalEnergy;
- (void)setTotalEnergy:;
- (double)totalElevationAscended;
- (void)setTotalElevationAscended:;
- (long long)totalStrideCount;
- (void)setTotalStrideCount:;
- (long long)totalStrokeCount;
- (void)setTotalStrokeCount:;
- (long long)totalFloorsClimbed;
- (void)setTotalFloorsClimbed:;
- (double)instantaneousSpeed;
- (void)setInstantaneousSpeed:;
- (double)instantaneousCadence;
- (void)setInstantaneousCadence:;
- (double)instantaneousPower;
- (void)setInstantaneousPower:;
- (double)inclination;
- (void)setInclination:;
- (double)resistanceLevel;
- (void)setResistanceLevel:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isAvailable;
@end
