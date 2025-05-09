@interface GEOLPRLicensePlateInfo : PBCodable
@property (nonatomic) NSMutableArray vehicleTypeKeys;
@property (nonatomic) NSMutableArray powerTypeKeys;
@property (nonatomic) BOOL hasLicensePlateStructure;
@property (nonatomic) GEOLPRLicensePlateStructure licensePlateStructure;
- (void)readAll:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)vehicleTypeKeys;
- (void)setVehicleTypeKeys:;
- (void)clearVehicleTypeKeys;
- (unsigned long long)vehicleTypeKeysCount;
- (id)powerTypeKeys;
- (void)setPowerTypeKeys:;
- (void)clearPowerTypeKeys;
- (unsigned long long)powerTypeKeysCount;
- (void)addVehicleTypeKeys:;
- (id)vehicleTypeKeysAtIndex:;
- (void)addPowerTypeKeys:;
- (id)powerTypeKeysAtIndex:;
- (BOOL)hasLicensePlateStructure;
- (id)licensePlateStructure;
- (void)setLicensePlateStructure:;
+ (BOOL)isValid:;
+ (Class)vehicleTypeKeysType;
+ (Class)powerTypeKeysType;
@end
