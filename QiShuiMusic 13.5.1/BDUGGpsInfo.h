@interface BDUGGpsInfo : NSObject
@property (nonatomic) double accuracy;
@property (nonatomic) double altitude;
@property (nonatomic) double altitudeAccuracy;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double timestamp;
- (id)initWithAccuracy:altitude:altitudeAccuracy:latitude:longitude:timestamp:;
- (double)altitude;
- (double)latitude;
- (id)initWithCoder:;
- (double)accuracy;
- (void)setAltitude:;
- (void)setLatitude:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (void)setLongitude:;
- (double)timestamp;
- (double)longitude;
- (id)copyWithZone:;
- (void)setAccuracy:;
- (id)toJSON;
- (double)altitudeAccuracy;
- (void)setAltitudeAccuracy:;
+ (id)gpsInfoWithDictionary:;
+ (BOOL)supportsSecureCoding;
@end
