@interface GEORoutingSettingsVirtualGarageSetttings : PBCodable
@property (nonatomic) BOOL hasElectronicVehicleCount;
@property (nonatomic) NSInteger electronicVehicleCount;
@property (nonatomic) BOOL hasLicensePlateCount;
@property (nonatomic) NSInteger licensePlateCount;
- (void)readAll:;
- (void)setHasLicensePlateCount:;
- (void)setLicensePlateCount:;
- (int)licensePlateCount;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setElectronicVehicleCount:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setHasElectronicVehicleCount:;
- (BOOL)hasElectronicVehicleCount;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (int)electronicVehicleCount;
- (BOOL)hasLicensePlateCount;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
