@interface GEORPPlaceInfo : PBCodable
@property (nonatomic) BOOL hasPlaceRequest;
@property (nonatomic) GEOPDPlaceRequest placeRequest;
@property (nonatomic) BOOL hasPlaceResponse;
@property (nonatomic) GEOPDPlaceResponse placeResponse;
@property (nonatomic) BOOL hasSourceApplication;
@property (nonatomic) NSString sourceApplication;
@property (nonatomic) BOOL hasSourceUrl;
@property (nonatomic) NSString sourceUrl;
- (void)clearLocations;
- (void)readAll:;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (void)clearSensitiveFields:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (void)clearSessionId;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setPlaceRequest:;
- (void)copyTo:;
- (id)sourceApplication;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (BOOL)hasPlaceRequest;
- (id)description;
- (id)placeRequest;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPlaceResponse;
- (id)placeResponse;
- (void)setPlaceResponse:;
- (BOOL)hasSourceApplication;
- (void)setSourceApplication:;
- (BOOL)hasSourceUrl;
- (id)sourceUrl;
- (void)setSourceUrl:;
+ (BOOL)isValid:;
@end
