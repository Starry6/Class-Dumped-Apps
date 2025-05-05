@interface GEOLPRUser : PBCodable
@property (nonatomic) NSMutableDictionary vehicles;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)vehicles;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setVehicles:;
- (void)clearVehicles;
- (void)setVehiclesValue:forKey:;
- (id)vehiclesForKey:;
- (void)enumerateVehiclesUsingBlock:;
- (unsigned long long)vehiclesCount;
+ (BOOL)isValid:;
+ (Class)vehiclesType;
@end
