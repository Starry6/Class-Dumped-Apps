@interface GEOLogMsgEventPlaceDataCache : PBCodable
@property (nonatomic) BOOL hasPlaceDataRequestingAppIdentifier;
@property (nonatomic) NSString placeDataRequestingAppIdentifier;
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
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPlaceDataRequestingAppIdentifier;
- (id)placeDataRequestingAppIdentifier;
- (void)setPlaceDataRequestingAppIdentifier:;
+ (BOOL)isValid:;
@end
