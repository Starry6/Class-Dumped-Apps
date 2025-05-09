@interface GEOPDCameraFrame : PBCodable
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) double altitude;
@property (nonatomic) BOOL hasYaw;
@property (nonatomic) double yaw;
@property (nonatomic) BOOL hasPitch;
@property (nonatomic) double pitch;
@property (nonatomic) BOOL hasRoll;
@property (nonatomic) double roll;
- (double)yaw;
- (void)readAll:;
- (void)setPitch:;
- (double)altitude;
- (id)initWithJSON:;
- (double)latitude;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (double)pitch;
- (BOOL)hasLongitude;
- (BOOL)hasPitch;
- (unsigned long long)hash;
- (BOOL)hasLatitude;
- (void)copyTo:;
- (void)setHasLatitude:;
- (double)roll;
- (void)setAltitude:;
- (void)mergeFrom:;
- (void)setLatitude:;
- (void)setHasLongitude:;
- (void)setHasPitch:;
- (void)setLongitude:;
- (BOOL)readFrom:;
- (id)description;
- (double)longitude;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasAltitude:;
- (BOOL)hasAltitude;
- (void)setYaw:;
- (void)setHasYaw:;
- (BOOL)hasYaw;
- (void)setRoll:;
- (void)setHasRoll:;
- (BOOL)hasRoll;
+ (BOOL)isValid:;
@end
