@interface MCGeofenceInfo : NSObject
@property (nonatomic) NSNumber longitude;
@property (nonatomic) NSNumber latitude;
@property (nonatomic) NSNumber radius;
@property (nonatomic) NSString geofenceId;
- (void)setRadius:;
- (id)latitude;
- (id)radius;
- (void)setLatitude:;
- (void)setLongitude:;
- (void).cxx_destruct;
- (id)description;
- (id)longitude;
- (id)geofenceId;
- (void)setGeofenceId:;
@end
