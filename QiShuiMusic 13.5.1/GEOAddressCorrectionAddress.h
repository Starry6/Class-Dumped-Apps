@interface GEOAddressCorrectionAddress : PBCodable
@property (nonatomic) BOOL hasAddressLocation;
@property (nonatomic) GEOLocation addressLocation;
@property (nonatomic) BOOL hasAddressID;
@property (nonatomic) NSString addressID;
@property (nonatomic) BOOL hasRadiusInMeters;
@property (nonatomic) double radiusInMeters;
- (void)readAll:;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (void)clearSensitiveFields:;
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
- (double)radiusInMeters;
- (BOOL)isEqual:;
- (void)setRadiusInMeters:;
- (id)copyWithZone:;
- (BOOL)hasAddressLocation;
- (id)addressLocation;
- (void)setAddressLocation:;
- (BOOL)hasAddressID;
- (id)addressID;
- (void)setAddressID:;
- (void)setHasRadiusInMeters:;
- (BOOL)hasRadiusInMeters;
+ (BOOL)isValid:;
@end
