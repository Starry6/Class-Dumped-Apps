@interface CMAbsoluteAltitudeData : CMLogItem
@property (nonatomic) NSNumber absoluteAltitude;
@property (nonatomic) double absoluteAltitudeAccuracy;
@property (nonatomic) double absoluteAltitudePrecision;
@property (nonatomic) q absoluteAltitudeStatusInfo;
@property (nonatomic) double altitude;
@property (nonatomic) double accuracy;
@property (nonatomic) double precision;
- (double)altitude;
- (void)dealloc;
- (double)precision;
- (id)initWithCoder:;
- (double)accuracy;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithAltitude:accuracy:precision:status:timestamp:;
- (id)absoluteAltitude;
- (void)setAltitudeData:accuracy:precision:status:;
- (double)absoluteAltitudeAccuracy;
- (double)absoluteAltitudePrecision;
- (long long)absoluteAltitudeStatusInfo;
+ (BOOL)supportsSecureCoding;
@end
