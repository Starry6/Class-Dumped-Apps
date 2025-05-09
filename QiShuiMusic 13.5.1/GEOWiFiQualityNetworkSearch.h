@interface GEOWiFiQualityNetworkSearch : PBCodable
@property (nonatomic) NSMutableArray ess;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) GEOLocation location;
@property (nonatomic) BOOL hasRadius;
@property (nonatomic) Q radius;
- (void)readAll:;
- (void)setRadius:;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (void)clearSensitiveFields:;
- (id)initWithJSON:;
- (BOOL)hasLocation;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)radius;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasRadius:;
- (id)location;
- (void)mergeFrom:;
- (id)ess;
- (unsigned long long)essCount;
- (id)initWithData:;
- (void)setLocation:;
- (void).cxx_destruct;
- (void)setEss:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRadius;
- (void)clearEss;
- (BOOL)isEqual:;
- (void)addEss:;
- (id)essAtIndex:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
+ (Class)essType;
@end
