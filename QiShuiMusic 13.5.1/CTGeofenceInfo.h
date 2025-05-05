@interface CTGeofenceInfo : NSObject
@property (nonatomic) NSNumber longitude;
@property (nonatomic) NSNumber latitude;
@property (nonatomic) NSNumber radius;
@property (nonatomic) NSString geofenceId;
- (void)setRadius:;
- (id)init;
- (id)latitude;
- (id)radius;
- (id)initWithCoder:;
- (void)setLatitude:;
- (void)encodeWithCoder:;
- (void)setLongitude:;
- (void).cxx_destruct;
- (id)description;
- (id)longitude;
- (id)copyWithZone:;
- (id)geofenceId;
- (void)setGeofenceId:;
+ (BOOL)supportsSecureCoding;
@end
