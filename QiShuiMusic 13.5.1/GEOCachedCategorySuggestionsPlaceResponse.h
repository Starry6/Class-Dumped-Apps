@interface GEOCachedCategorySuggestionsPlaceResponse : PBCodable
@property (nonatomic) BOOL hasResponse;
@property (nonatomic) GEOPDPlaceResponse response;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasSourceURL;
@property (nonatomic) NSString sourceURL;
@property (nonatomic) BOOL hasCountryCode;
@property (nonatomic) NSString countryCode;
@property (nonatomic) BOOL hasLanguage;
@property (nonatomic) NSString language;
@property (nonatomic) PBUnknownFields unknownFields;
- (BOOL)hasCountryCode;
- (void)readAll:;
- (void)setCountryCode:;
- (id)countryCode;
- (id)unknownFields;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (void)clearSensitiveFields:;
- (void)setSourceURL:;
- (void)setLanguage:;
- (id)initWithJSON:;
- (id)language;
- (BOOL)hasResponse;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (id)sourceURL;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (BOOL)hasSourceURL;
- (void)setTimestamp:;
- (id)response;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (double)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setResponse:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasLanguage;
+ (BOOL)isValid:;
@end
